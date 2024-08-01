import random
import time



def heapify(arr, n, i):
    largest = i
    left = 2*i+1
    right = 2 * i + 2
    
    if left < n and arr[i] < arr[left]:
        largest = left
    if right < n and arr[largest]<arr[right]:
        largest = right
    if largest != i:
        arr[i], arr[largest] = arr[largest], arr[i]
        heapify(arr, n, largest)
    
def heap_sort(arr):
    n = len(arr)
    
    for i in range(n//2-1,-1,-1):
        heapify(arr, n, i)
    
    for i in range(n-1, 0, -1):
        arr[i], arr[0] = arr[0], arr[i]
        heapify(arr, i, 0)
    return arr
    

def measure_time_heap_sort(arr):
    start = time.time()
    result = heap_sort(arr)
    print(arr)
    end = time.time()
    return end - start




arr = [4, 2, 1, 6, 9]  # Random list of size n
measure_time_heap_sort(arr)
print (arr)

    
