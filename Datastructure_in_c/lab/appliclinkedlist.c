#include <stdio.h>
#include <stdlib.h>

// Node structure for a term in a polynomial
typedef struct Node {
    int coefficient;
    int exponent;
    struct Node *next;
} Node;

// Function prototypes
Node* createNode(int coefficient, int exponent);
Node* insertTerm(Node *head, int coefficient, int exponent);
Node* addPolynomials(Node *poly1, Node *poly2);
Node* multiplyPolynomials(Node *poly1, Node *poly2);
void displayPolynomial(Node *poly);

int main() {
    // Polynomial 1: 3x^2 + 2x + 5
    Node *poly1 = NULL;
    poly1 = insertTerm(poly1, 3, 2);
    poly1 = insertTerm(poly1, 2, 1);
    poly1 = insertTerm(poly1, 5, 0);

    // Polynomial 2: 4x^3 + x^2 + 3x + 1
    Node *poly2 = NULL;
    poly2 = insertTerm(poly2, 4, 3);
    poly2 = insertTerm(poly2, 1, 2);
    poly2 = insertTerm(poly2, 3, 1);
    poly2 = insertTerm(poly2, 1, 0);

    printf("Polynomial 1: ");
    displayPolynomial(poly1);

    printf("Polynomial 2: ");
    displayPolynomial(poly2);

    // Adding polynomials
    Node *sum = addPolynomials(poly1, poly2);
    printf("Sum of polynomials: ");
    displayPolynomial(sum);

    // Multiplying polynomials
    Node *product = multiplyPolynomials(poly1, poly2);
    printf("Product of polynomials: ");
    displayPolynomial(product);

    return 0;
}

// Function to create a new term node for a polynomial
Node* createNode(int coefficient, int exponent) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->coefficient = coefficient;
    newNode->exponent = exponent;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a term into a polynomial
Node* insertTerm(Node *head, int coefficient, int exponent) {
    if (head == NULL) {
        return createNode(coefficient, exponent);
    }
    Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = createNode(coefficient, exponent);
    return head;
}

// Function to add two polynomials
Node* addPolynomials(Node *poly1, Node *poly2) {
    Node *result = NULL;
    while (poly1 != NULL && poly2 != NULL) {
        if (poly1->exponent > poly2->exponent) {
            result = insertTerm(result, poly1->coefficient, poly1->exponent);
            poly1 = poly1->next;
        } else if (poly1->exponent < poly2->exponent) {
            result = insertTerm(result, poly2->coefficient, poly2->exponent);
            poly2 = poly2->next;
        } else {
            int sumCoefficients = poly1->coefficient + poly2->coefficient;
            result = insertTerm(result, sumCoefficients, poly1->exponent);
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }
    while (poly1 != NULL) {
        result = insertTerm(result, poly1->coefficient, poly1->exponent);
        poly1 = poly1->next;
    }
    while (poly2 != NULL) {
        result = insertTerm(result, poly2->coefficient, poly2->exponent);
        poly2 = poly2->next;
    }
    return result;
}

// Function to multiply two polynomials
Node* multiplyPolynomials(Node *poly1, Node *poly2) {
    Node *result = NULL;
    Node *temp1 = poly1;
    while (temp1 != NULL) {
        Node *temp2 = poly2;
        while (temp2 != NULL) {
            int coeff = temp1->coefficient * temp2->coefficient;
            int exp = temp1->exponent + temp2->exponent;
            result = insertTerm(result, coeff, exp);
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }
    return result;
}

// Function to display a polynomial
void displayPolynomial(Node *poly) {
    if (poly == NULL) {
        printf("0\n");
        return;
    }
    Node *temp = poly;
    while (temp != NULL) {
        printf("%dx^%d", temp->coefficient, temp->exponent);
        if (temp->next != NULL) {
            printf(" + ");
        }
        temp = temp->next;
    }
    printf("\n");
}
