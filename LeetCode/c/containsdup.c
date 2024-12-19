#include <stdio.h>
#include <stdbool.h>

#define MAX_NUMS 1000

// Function to check if an array contains duplicates
bool containsDuplicate(int* nums, int numsSize) {
    // Array to act like a set for storing visited elements
    bool seen[MAX_NUMS] = { false };
    
    for (int i = 0; i < numsSize; i++) {
        int index = nums[i];
        
        // If the number is already seen, return true
        if (seen[index]) {
            return true;
        }
        
        // Mark the number as seen
        seen[index] = true;
    }
    
    return false;
}

int main() {
    int nums[] = {1, 2, 3, 4, 1};  // Example array
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    if (containsDuplicate(nums, numsSize)) {
        printf("Array contains duplicates.\n");
    } else {
        printf("Array does not contain duplicates.\n");
    }
    
    return 0;
}
