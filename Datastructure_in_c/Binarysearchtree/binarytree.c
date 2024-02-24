#include <stdio.h>
#include <stdlib.h>

// Node structure for BST
typedef struct Node {
    int data;
    struct Node *left;
    struct Node *right;
    int height; // Height of the node
} Node;

// Function prototypes
Node* createNode(int data);
int max(int a, int b);
int height(Node *node);
int getBalanceFactor(Node *node);
Node* rightRotate(Node *y);
Node* leftRotate(Node *x);
Node* insertNode(Node *root, int data);
void inOrderTraversal(Node *root);

int main() {
    Node *root = NULL;
    int values[] = {10, 20, 30, 40, 50, 25};

    // Inserting elements into the AVL tree
    for (int i = 0; i < sizeof(values) / sizeof(values[0]); i++) {
        root = insertNode(root, values[i]);
    }

    // Printing the inorder traversal of the AVL tree
    printf("Inorder traversal of AVL tree: ");
    inOrderTraversal(root);
    printf("\n");

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
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->height = 1;
    return newNode;
}

// Function to get maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to get height of a node
int height(Node *node) {
    if (node == NULL)
        return 0;
    return node->height;
}

// Function to get balance factor of a node
int getBalanceFactor(Node *node) {
    if (node == NULL)
        return 0;
    return height(node->left) - height(node->right);
}

// Function to perform a right rotation
Node* rightRotate(Node *y) {
    Node *x = y->left;
    Node *T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update heights
    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    // Return new root
    return x;
}

// Function to perform a left rotation
Node* leftRotate(Node *x) {
    Node *y = x->right;
    Node *T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    // Update heights
    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    // Return new root
    return y;
}

// Function to insert a node into AVL tree
Node* insertNode(Node *root, int data) {
    // Perform standard BST insertion
    if (root == NULL)
        return createNode(data);

    if (data < root->data)
        root->left = insertNode(root->left, data);
    else if (data > root->data)
        root->right = insertNode(root->right, data);
    else // Duplicate keys are not allowed
        return root;

    // Update height of this ancestor node
    root->height = 1 + max(height(root->left), height(root->right));

    // Get the balance factor of this ancestor node to check whether this node became unbalanced
    int balance = getBalanceFactor(root);

    // If this node becomes unbalanced, there are four cases

    // Left Left Case
    if (balance > 1 && data < root->left->data)
        return rightRotate(root);

    // Right Right Case
    if (balance < -1 && data > root->right->data)
        return leftRotate(root);

    // Left Right Case
    if (balance > 1 && data > root->left->data) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    // Right Left Case
    if (balance < -1 && data < root->right->data) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    // Return the (unchanged) node pointer
    return root;
}

// Function to perform in-order traversal of AVL tree
void inOrderTraversal(Node *root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}
