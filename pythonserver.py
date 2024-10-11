from flask import Flask
from datetime import datetime

app = Flask(__name__)

# Log request
@app.route('/')
def log_request():
    # Log the current time with microsecond precision
    current_time = datetime.now().strftime('%Y-%m-%d %H:%M:%S.%f') + '\n'
    
    # Append the current time to the log file
    with open('request_log.txt', 'a') as log_file:
        log_file.write(current_time)
    
    # Output response (optional)
    return f"Request received at: {current_time}"

if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5000)
