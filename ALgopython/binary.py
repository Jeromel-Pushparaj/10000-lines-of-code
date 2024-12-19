import time
import matplotlib.pyplot as plt

def binary_search(arr, l, r, x):
    if r>=l:
        mid = l + (r-l) // 2
        if arr[mid] == x:
            print(mid)
            return mid
        elif arr[mid] > x:
            binary_search(arr, l, mid-1, x)
        else:
            binary_search(arr, mid+1, r, x)
    else:
        return -1

def measure_time_binary_search(arr, x):
    start = time.time()
    index = binary_search(arr, 0, len(arr) - 1, x)
    print(f"element: {x} found at {index}")
    end = time.time()
    return end - start

# Testing for different values of n
n_values = [1000, 2000, 3000, 4000, 5000]
times = []
binary_search(n_values, 0, len(n_values) - 1, 3000)
binary_search(n_values, 0, len(n_values) - 1, 5000)

for n in n_values:
    arr = list(range(n))
    x = 820
    times.append(measure_time_binary_search(arr, x))

plt.plot(n_values, times)
plt.xlabel('Number of Elements (n)')
plt.ylabel('Time Taken (seconds)')
plt.title('Time Taken for Binary Search vs Number of Elements')
plt.show()