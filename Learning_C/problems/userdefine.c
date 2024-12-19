#include <stdio.h>

typedef struct {
    int result;
} CalculationResult;

CalculationResult add(int a, int b) {
    CalculationResult res;
    res.result = a + b;
    return res;
}

CalculationResult subtract(int a, int b) {
    CalculationResult res;
    res.result = a - b;
    return res;
}

CalculationResult multiply(int a, int b) {
    CalculationResult res;
    res.result = a * b;
    return res;
}

CalculationResult divide(int a, int b) {
    CalculationResult res;
    if (b != 0) {
        res.result = a / b;
    } else {
        printf("Error: Division by zero\n");
        res.result = 0; // You can choose any default value here
    }
    return res;
}

int main() {
    int num1, num2;
    CalculationResult result;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    result = add(num1, num2);
    printf("Addition result: %d\n", result.result);

    result = subtract(num1, num2);
    printf("Subtraction result: %d\n", result.result);

    result = multiply(num1, num2);
    printf("Multiplication result: %d\n", result.result);

    result = divide(num1, num2);
    printf("Division result: %d\n", result.result);

    return 0;
}
