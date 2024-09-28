#include <stdio.h>
#include <string.h>


int main() {
    // Declare variables for employee data
    char name[100];
    int age;
    float salary;

    // Open the file "emp.rec" for writing
    FILE *file = fopen("emp.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Initialize employee data
    strcpy(name, "John Doe");
    age = 25;
    salary = 50000.0;

    // Write employee data to the file using fprintf
    fprintf(file, "Name: %s\n", name);
    fprintf(file, "Age: %d\n", age);
    fprintf(file, "Salary: %.2f\n", salary);

    // Close the file
    fclose(file);

    printf("Employee data has been written to the file 'emp.txt'\n");

    return 0;
}
