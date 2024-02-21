#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

// Stack structure for operators
typedef struct {
    char items[MAX_SIZE];
    int top;
} Stack;

// Function prototypes
void initializeStack(Stack *s);
int isFull(Stack *s);
int isEmpty(Stack *s);
void push(Stack *s, char c);
char pop(Stack *s);
int precedence(char c);
void infixToPostfix(char *infix, char *postfix);

int main() {
    char infix1[] = "A + B * C + D";
    char infix2[] = "(A + B) * (C + D)";
    char infix3[] = "A * B + C * D";
    char infix4[] = "A + B + C + D";

    char postfix[MAX_SIZE];

    printf("Infix expression: %s\n", infix1);
    infixToPostfix(infix1, postfix);
    printf("Postfix expression: %s\n\n", postfix);

    printf("Infix expression: %s\n", infix2);
    infixToPostfix(infix2, postfix);
    printf("Postfix expression: %s\n\n", postfix);

    printf("Infix expression: %s\n", infix3);
    infixToPostfix(infix3, postfix);
    printf("Postfix expression: %s\n\n", postfix);

    printf("Infix expression: %s\n", infix4);
    infixToPostfix(infix4, postfix);
    printf("Postfix expression: %s\n\n", postfix);

    return 0;
}

// Function to initialize the stack
void initializeStack(Stack *s) {
    s->top = -1;
}

// Function to check if the stack is full
int isFull(Stack *s) {
    return (s->top == MAX_SIZE - 1);
}

// Function to check if the stack is empty
int isEmpty(Stack *s) {
    return (s->top == -1);
}

// Function to push an element onto the stack
void push(Stack *s, char c) {
    if (isFull(s)) {
        printf("Stack overflow\n");
        exit(1);
    }
    s->items[++(s->top)] = c;
}

// Function to pop an element from the stack
char pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        exit(1);
    }
    return s->items[(s->top)--];
}

// Function to get precedence of an operator
int precedence(char c) {
    switch (c) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
    }
    return -1;
}

// Function to convert infix expression to postfix
void infixToPostfix(char *infix, char *postfix) {
    Stack operatorStack;
    initializeStack(&operatorStack);

    int i = 0, j = 0;
    while (infix[i] != '\0') {
        char current = infix[i];
        if (isalnum(current)) {
            postfix[j++] = current;
        } else if (current == '(') {
            push(&operatorStack, current);
        } else if (current == ')') {
            while (!isEmpty(&operatorStack) && operatorStack.items[operatorStack.top] != '(') {
                postfix[j++] = pop(&operatorStack);
            }
            if (!isEmpty(&operatorStack) && operatorStack.items[operatorStack.top] == '(') {
                pop(&operatorStack);
            }
        } else {
            while (!isEmpty(&operatorStack) && precedence(current) <= precedence(operatorStack.items[operatorStack.top])) {
                postfix[j++] = pop(&operatorStack);
            }
            push(&operatorStack, current);
        }
        i++;
    }

    while (!isEmpty(&operatorStack)) {
        postfix[j++] = pop(&operatorStack);
    }

    postfix[j] = '\0';
}
