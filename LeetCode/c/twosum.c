#include <stdio.h>

// Function to find two indices such that nums[i] + nums[j] == target
void twoSum(int* nums, int numsSize, int target, int* result) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;  // Store index i
                result[1] = j;  // Store index j
                return;
            }
        }
    }
    // If no solution is found, store -1 (can be adjusted based on need)
    result[0] = -1;
    result[1] = -1;
}

int main() {
    int nums[] = {2, 11, 7, 15};  // Example array
    int target = 9;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int result[2];

    twoSum(nums, numsSize, target, result);

    if (result[0] != -1) {
        printf("Indices: [%d, %d]\n", result[0], result[1]);
    } else {
        printf("No solution found.\n");
    }

    return 0;
}
