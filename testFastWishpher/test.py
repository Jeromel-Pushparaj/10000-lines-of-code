import os
import time
import wave
import pyaudio
from faster_whisper import WhisperModel

# Define constants
NEON_GREEN = '\033[32m'
RESET_COLOR = '\033[0m'

os.environ["KMP_DUPLICATE_LIB_OK"]="TRUE"
# Function for recording an audio fragment
def record_chunk(p, stream, file_path, chunk_length=1):
    """
    Writes an audio fragment to a file.

    Args:
        p(pyaudio.PyAudio): PyAudio object.
        stream(pyaudio.Stream): PyAudio stream.
        file_path (str): Path to the file where the audio fragment will be recorded.
        chunk_length (int): Length of the audio chunk in seconds.

    Returns:
        None
    """

    frames = []

    for _ in range(0, int(16000 / 1024 * chunk_length)):
        data = stream.read(1024)
        frames.append(data)

    wf = wave.open(file_path, 'wb')
    wf.setnchannels(1)
    wf.setsampwidth(p.get_sample_size(pyaudio.paInt16))
    wf.setframerate(16000)
    wf.writeframes(b''.join(frames))
    wf.close()

def transcribe_chunk(model, file_path):
    segments, info = model.transcribe(file_path, beam_size=7)
    transcription = ''.join(segment.text for segment in segments)
    return transcription

def main2():
    """
    The main function of the program.
    """

    # Select the Whisper model
    model = WhisperModel("medium", device="cuda", compute_type="int8")

    # Initialize PyAudio
    p = pyaudio.PyAudio()

    # Open the recording stream
    stream = p.open(format=pyaudio.paInt16, channels=1, rate=16000, input=True, frames_per_buffer=1024)

    # Initialize an empty string to accumulate transcriptions
    accumulated_transcription = ""

    try:
        while True:
            # Record an audio fragment
            chunk_file = "temp_chunk.wav"
            record_chunk(p, stream, chunk_file)

            # Transcribe the audio fragment
            transcription = transcribe_chunk(model, chunk_file)
            print(NEON_GREEN + transcription + RESET_COLOR)

            # Delete the temporary file
            os.remove(chunk_file)

            # Add a new transcription to the accumulated transcription
            accumulated_transcription += transcription + " "

    except KeyboardInterrupt:
        print("Stopping...")

        # Write the accumulated transcription to a log file
        with open("log.txt", "w") as log_file:
            log_file.write(accumulated_transcription)

    finally:
        print("LOG" + accumulated_transcription)
        # Close the recording stream
        stream.stop_stream()
        stream.close()

        # Stop PyAudio
        p.terminate()


if __name__ == "__main__":
    main2()