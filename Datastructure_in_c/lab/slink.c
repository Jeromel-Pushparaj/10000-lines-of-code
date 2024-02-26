#include <stdio.h>
#include <stdlib.h>

// Node structure for singly linked list
typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Function prototypes
Node* createNode(int data);
Node* insertNode(Node *head, int data);
Node* deleteNode(Node *head, int key);
void displayList(Node *head);

int main() {
    Node *head = NULL;

    // Creating a singly linked list
    head = insertNode(head, 10);
    head = insertNode(head, 20);
    head = insertNode(head, 30);
    head = insertNode(head, 40);
    head = insertNode(head, 50);

    printf("Original list: ");
    displayList(head);

    // Deleting a given integer from the linked list
    int keyToDelete = 30;
    head = deleteNode(head, keyToDelete);

    printf("\nList after deleting %d: ", keyToDelete);
    displayList(head);

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

// Function to insert a node at the end of the list
Node* insertNode(Node *head, int data) {
    if (head == NULL) {
        return createNode(data);
    }
    Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = createNode(data);
    return head;
}

// Function to delete a node with given key from the list
Node* deleteNode(Node *head, int key) {
    if (head == NULL) {
        printf("List is empty\n");
        return NULL;
    }
    Node *prev = NULL;
    Node *curr = head;
    while (curr != NULL && curr->data != key) {
        prev = curr;
        curr = curr->next;
    }
    if (curr == NULL) {
        printf("%d not found in the list\n", key);
        return head;
    }
    if (prev == NULL) {
        head = head->next;
    } else {
        prev->next = curr->next;
    }
    free(curr);
    return head;
}

// Function to display the contents of the list
void displayList(Node *head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
