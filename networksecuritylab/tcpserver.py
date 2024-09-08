import socket

server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server_socket.bind(('localhost', 12345))
server_socket.listen(1)
print("Waiting for connection...")
conn, addr = server_socket.accept()
print(f"Connection from {addr}")
data = conn.recv(1024)
print(f"Received: {data.decode()}")
conn.sendall(b"Hello from Server")
conn.close()
