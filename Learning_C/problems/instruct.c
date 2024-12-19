#include <stdio.h>

// Define the structure
struct Student {
    int rollNumber;
    char name[50];
    int age;
};

int main() {
    // Declare and initialize a structure variable
    struct Student student1 = {101, "John Doe", 20};

    // Access and print the values of the structure members
    printf("Student 1:\n");
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);

    // Declare and initialize another structure variable
    struct Student student2 = {102, "Jane Smith", 21};

    // Access and print the values of the structure members
    printf("\nStudent 2:\n");
    printf("Roll Number: %d\n", student2.rollNumber);
    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);

    return 0;
}
