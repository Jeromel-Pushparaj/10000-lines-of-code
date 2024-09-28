#include <stdio.h>

// Function to swap two integers using call by value
void swapByValue(int a, int b, int *result_a, int *result_b) {
    int temp = a;
    a = b;
    b = temp;
    *result_a = a;
    *result_b = b;
}

// Function to swap two integers using call by reference
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2, swapped_num1, swapped_num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Call by value
    printf("\nBefore swapping (Call by Value):\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    swapByValue(num1, num2, &swapped_num1, &swapped_num2);
    printf("After swapping (Call by Value):\n");
    printf("After swap: num1 = %d, num2 = %d\n", swapped_num1, swapped_num2);

    // Call by reference
    printf("\nBefore swapping (Call by Reference):\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    swapByReference(&num1, &num2);
    printf("After swapping (Call by Reference):\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
