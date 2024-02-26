#include <stdio.h>
#include <stdlib.h>

// Node structure for the stack
typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Function prototypes
Node* createNode(int data);
int isEmpty(Node *top);
void push(Node **top, int data);
int pop(Node **top);
int peek(Node *top);
void displayStack(Node *top);

int main() {
    Node *top = NULL;

    // Pushing elements onto the stack
    push(&top, 10);
    push(&top, 20);
    push(&top, 30);
    push(&top, 40);
    push(&top, 50);

    printf("Stack elements after pushing: ");
    displayStack(top);

    // Popping an element from the stack
    int poppedElement = pop(&top);
    printf("\nPopped element: %d\n", poppedElement);

    printf("Stack elements after popping: ");
    displayStack(top);

    return 0;
}

// Function to create a new node
Node* createNode(int data) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to check if the stack is empty
int isEmpty(Node *top) {
    return (top == NULL);
}

// Function to push an element onto the stack
void push(Node **top, int data) {
    Node *newNode = createNode(data);
    newNode->next = *top;
    *top = newNode;
}

// Function to pop an element from the stack
int pop(Node **top) {
    if (isEmpty(*top)) {
        printf("Stack is empty. Cannot pop.\n");
        exit(1);
    }
    Node *temp = *top;
    int data = temp->data;
    *top = (*top)->next;
    free(temp);
    return data;
}

// Function to peek at the top element of the stack
int peek(Node *top) {
    if (isEmpty(top)) {
        printf("Stack is empty. Cannot peek.\n");
        exit(1);
    }
    return top->data;
}

// Function to display the elements of the stack
void displayStack(Node *top) {
    if (isEmpty(top)) {
        printf("Stack is empty.\n");
        return;
    }
    Node *temp = top;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
