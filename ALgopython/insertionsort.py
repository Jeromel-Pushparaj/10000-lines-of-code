def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key

elements = [12, 45, 78, 96, 56, 77, 51, 8, 104, 96]

# Print original list
print("Original list:", elements)

# Sort the list using insertion sort
insertion_sort(elements)

# Print sorted list
print("Sorted list:  ", elements)