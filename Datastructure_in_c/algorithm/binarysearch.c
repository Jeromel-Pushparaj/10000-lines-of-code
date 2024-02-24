#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if key is present at mid
        if (arr[mid] == key) {
            return mid;
        }

        // If key is greater, ignore left half
        if (arr[mid] < key) {
            low = mid + 1;
        }

        // If key is smaller, ignore right half
        else {
            high = mid - 1;
        }
    }

    // If key is not present in array
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    // Perform binary search
    int index = binarySearch(arr, 0, n - 1, key);

    // Check if key is found
    if (index != -1) {
        printf("Element %d found at index %d\n", key, index);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
