#include <stdio.h>

int main() {
    char name[50];
    int rollno;
    int marks[4];
    int totalMarks = 0;
    float percentage = 0.0;

    // Input section
    printf("Enter student name: ");
    scanf("%[^\n]", name);  // Read the entire line including spaces
    printf("Enter roll number: ");
    scanf("%d", &rollno);

    printf("Enter marks for four subjects (out of 100):\n");
    for (int i = 0; i < 4; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        totalMarks += marks[i];
    }
    percentage = totalMarks/5.0;

    // Output section
    printf("\nStudent Information:\n");
    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", rollno);
    printf("Marks obtained:\n");
    for (int i = 0; i < 4; i++) {
        printf("Subject %d: %d\n", i + 1, marks[i]);
    }
    printf("Total Marks: %d\n", totalMarks);
    printf("Your percentage: %.2f\n",percentage);

    return 0;
}
