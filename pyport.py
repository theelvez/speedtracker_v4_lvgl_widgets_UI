import os
import serial
import sys
import time

def clear_screen():
    # For Windows
    if os.name == 'nt':
        os.system('cls')
    # For macOS and Linux
    else:
        os.system('clear')

def read_from_com(port):
    clear_screen()  # Clear the screen before running the code
    disconnected = False
    while True:
        try:
            ser = serial.Serial(port, 9600, timeout=1)
            print(f"Connected to {port}")
            disconnected = False
            while True:
                if ser.in_waiting > 0:
                    try:
                        # Decode and ignore invalid characters
                        data = ser.readline().decode('utf-8', errors='ignore').strip()
                        if data:
                            if "####" in data:
                                print(f"\033[91m{data}\033[0m")  # Prints in red
                            elif "****" in data:
                                print(f"\033[92m{data}\033[0m")  # Prints in green
                            else:
                                print(data)
                    except UnicodeDecodeError:
                        # Ignore specific Unicode decode errors
                        continue
        except serial.SerialException:
            if not disconnected:
                print(f"Connection lost.")
                print(f"Reconnecting to {port}...")
                disconnected = True
        except Exception as e:
            print(f"Unexpected error: {e}")
        finally:
            if 'ser' in locals() and ser.is_open:
                ser.close()
                print(f"Closed connection to {port}")
            time.sleep(1)

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python pyport.py COMX")
        sys.exit(1)
    
    port = sys.argv[1]
    read_from_com(port)
