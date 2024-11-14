import socket
from concurrent.futures import ThreadPoolExecutor

def scan_port(ip, port):
    """
    Tries to connect to a specified IP address and port.
    Returns True if the port is open, otherwise False.
    """
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as sock:
        sock.settimeout(1)  # Timeout for the connection attempt
        result = sock.connect_ex((ip, port))
        return port if result == 0 else None

def scan_ports(ip, port_range=(1, 1024)):
    """
    Scans ports in the specified range for the given IP.
    Prints open ports.
    """
    open_ports = []
    print(f"Scanning IP: {ip} for open ports from {port_range[0]} to {port_range[1]}")

    with ThreadPoolExecutor(max_workers=100) as executor:
        futures = [executor.submit(scan_port, ip, port) for port in range(port_range[0], port_range[1] + 1)]
        
        for future in futures:
            port = future.result()
            if port:
                open_ports.append(port)
                print(f"Port {port} is open on {ip}")

    if not open_ports:
        print("No open ports found.")
    else:
        print(f"Open ports on {ip}: {open_ports}")

if __name__ == "__main__":
    # Specify the IP address and port range to scan
    ip_to_scan = input("Enter the IP address to scan: ")
    port_start = int(input("Enter the start of port range (default 1): ") or "1")
    port_end = int(input("Enter the end of port range (default 1024): ") or "1024")
    
    scan_ports(ip_to_scan, (port_start, port_end))
