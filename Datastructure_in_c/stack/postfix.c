#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_STACK_SIZE 100

// Stack structure
typedef struct {
    int top;
    int items[MAX_STACK_SIZE];
} Stack;

// Function prototypes
void push(Stack *s, int value);
int pop(Stack *s);
int evaluatePostfix(char *expression);

int main() {
    char expression[100];

    printf("Enter the postfix expression: ");
    fgets(expression, 100, stdin);

    // Remove the newline character
    for (int i = 0; expression[i] != '\0'; i++) {
        if (expression[i] == '\n') {
            expression[i] = '\0';
            break;
        }
    }

    int result = evaluatePostfix(expression);
    printf("Result: %d\n", result);

    return 0;
}

void push(Stack *s, int value) {
    if (s->top == MAX_STACK_SIZE - 1) {
        printf("Stack overflow\n");
        exit(EXIT_FAILURE);
    }
    s->items[++s->top] = value;
}

int pop(Stack *s) {
    if (s->top == -1) {
        printf("Stack underflow\n");
        exit(EXIT_FAILURE);
    }
    return s->items[s->top--];
}

int evaluatePostfix(char *expression) {
    Stack s;
    s.top = -1;
    int i = 0;

    while (expression[i] != '\0') {
        if (isdigit(expression[i])) {
            push(&s, expression[i] - '0');
        } else {
            int operand2 = pop(&s);
            int operand1 = pop(&s);
            switch (expression[i]) {
                case '+':
                    push(&s, operand1 + operand2);
                    break;
                case '-':
                    push(&s, operand1 - operand2);
                    break;
                case '*':
                    push(&s, operand1 * operand2);
                    break;
                case '/':
                    push(&s, operand1 / operand2);
                    break;
                default:
                    printf("Invalid expression\n");
                    exit(EXIT_FAILURE);
            }
        }
        i++;
    }

    return pop(&s);
}
