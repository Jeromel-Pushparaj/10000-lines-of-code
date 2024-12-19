#include <stdio.h>

struct Student {
    char name[50];
    float marks[5];
};

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Create an array of struct Student to hold the data of 'n' students
    struct Student students[n];

    // Input data for each student
    for (int i = 0; i < n; i++) {
        printf("Enter details for Student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Enter marks in 5 subjects:\n");
        for (int j = 0; j < 5; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
        }
    }

    // Open a file in write mode
    FILE *file = fopen("student_data.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Write data to the file
    for (int i = 0; i < n; i++) {
        fprintf(file, "Name: %s\n", students[i].name);
        fprintf(file, "Marks:\n");
        for (int j = 0; j < 5; j++) {
            fprintf(file, "Subject %d: %.2f\n", j + 1, students[i].marks[j]);
        }
        fprintf(file, "----------------------------------\n");
    }

    // Close the file
    fclose(file);

    printf("Data stored in the file 'student_data.txt'.\n");

    return 0;
}
