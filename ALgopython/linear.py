import time
import matplotlib.pyplot as plt

def linear_search(arr, x):
    for i in range(len(arr)):
        if arr[i] == x:
            return i
    return -1

def measure_time_linear_search(arr, x):
    start = time.time()
    linear_search(arr, x)
    end = time.time()
    return end - start

# Testing for different values of n
n_values = [1000, 2000, 3000, 4000, 5000]
times = []

for n in n_values:
    arr = list(range(n))
    x = n - 1
    times.append(measure_time_linear_search(arr, x))

plt.plot(n_values, times)
plt.xlabel('Number of Elements (n)')
plt.ylabel('Time Taken (seconds)')
plt.title('Time Taken for Linear Search vs Number of Elements')
plt.show()