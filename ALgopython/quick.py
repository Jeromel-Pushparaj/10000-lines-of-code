def quick_sort(arr):
    # Base case: If the array has 1 or 0 elements, it's already sorted
    if len(arr) <= 1:
        return arr
    
    # Choosing the pivot element
    pivot = arr[len(arr) // 2]
    
    # Dividing elements into three lists
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    
    # Recursively apply quick sort to the left and right partitions
    return quick_sort(left) + middle + quick_sort(right)

# List to be sorted
arr = [73, 42, 18, 85, 6, 97, 51, 24, 90, 13]

# Sorting the list
sorted_arr = quick_sort(arr)
print("Sorted array:", sorted_arr)
