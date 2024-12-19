#include <stdio.h>

void generateFibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci series: ");
    
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i; //if the i = 0 or 1 this line will run
        } else {
            next = first + second; //when i = above 1 this line is run here 0+1 = 1 so now next = 1 | 1+1 = 2 | 1+2 = 3|2+3 = 5
            first = second;// now first = 1 | = 1| = 2| = 3
            second = next;//now second = 1 | = 2| = 3|= 5
        }
        printf("%d ", next);
    }

    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    generateFibonacci(n);

    return 0;
}
