#include <stdio.h>
#include <stdlib.h>

// Self-referential structure to represent a student
struct Student {
    char name[50];
    int rollNumber;
    float marks[5];
    float totalMarks;
    float percentage;
    struct Student* next;
};

// Function to calculate total marks and percentage for each student
void calculateTotalAndPercentage(struct Student* student) {
    float total = 0.0;
    for (int i = 0; i < 5; i++) {
        total += student->marks[i];
    }
    student->totalMarks = total;
    student->percentage = total / 5.0;
}

// Function to create a new student node
struct Student* createStudentNode() {
    struct Student* newStudent = (struct Student*)malloc(sizeof(struct Student));
    if (newStudent == NULL) {
        printf("Memory allocation failed. Exiting.\n");
        exit(1);
    }

    printf("Enter student name: ");
    scanf("%s", newStudent->name);

    printf("Enter roll number: ");
    scanf("%d", &newStudent->rollNumber);

    printf("Enter marks in 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &newStudent->marks[i]);
    }

    newStudent->next = NULL;

    return newStudent;
}

// Function to display the mark sheet for a student
void displayMarkSheet(struct Student* student) {
    printf("------------------------------------------------\n");
    printf("Name: %s\n", student->name);
    printf("Roll Number: %d\n", student->rollNumber);
    printf("Marks:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: %.2f\n", i + 1, student->marks[i]);
    }
    printf("Total Marks: %.2f\n", student->totalMarks);
    printf("Percentage: %.2f%%\n", student->percentage);
    printf("------------------------------------------------\n");
}

int main() {
    struct Student* head = NULL;
    struct Student* current = NULL;

    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Create a linked list of students
    for (int i = 0; i < numStudents; i++) {
        struct Student* newStudent = createStudentNode();
        calculateTotalAndPercentage(newStudent);

        if (head == NULL) {
            head = newStudent;
            current = head;
        } else {
            current->next = newStudent;
            current = current->next;
        }
    }

    // Display the mark sheets for all students
    current = head;
    while (current != NULL) {
        displayMarkSheet(current);
        current = current->next;
    }

    // Free allocated memory for all students
    current = head;
    while (current != NULL) {
        struct Student* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
// In this program, we first define the self-referential structure struct Student, which holds information about a student, including their name, roll number, marks in 5 subjects, total marks, percentage, and a pointer to the next student node.

// The createStudentNode function is used to create a new student node by taking input from the user for each student's details.

// The calculateTotalAndPercentage function calculates the total marks and percentage for a given student.

// In the main function, we create a linked list of students by asking the user to input the number of students and then creating each student node and adding it to the linked list.

// Finally, we display the mark sheets for all the students and free the allocated memory for each student to avoid memory leaks.