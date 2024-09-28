#include <stdio.h>
#include <stdlib.h>

// Define a self-referential structure for singly linked list
struct Node {
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node *createNode(int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main() {
    // Creating nodes
    struct Node *head = createNode(1);
    struct Node *second = createNode(2);
    struct Node *third = createNode(3);

    // Connecting nodes to form a linked list
    head->next = second;
    second->next = third;

    // Traversing and printing the linked list
    struct Node *current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }

    // Freeing allocated memory
    free(head);
    free(second);
    free(third);

    return 0;
}
