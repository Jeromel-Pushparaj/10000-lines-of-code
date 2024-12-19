#include <stdio.h>
#include <stdlib.h>
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
 // Open the file in binary write mode
 FILE *file = fopen("student_data.bin", "wb");
 if (file == NULL) {
 printf("Error opening file.\n");
 return 1;
 }
 // Write data to the file using fwrite
 fwrite(students, sizeof(struct Student), n, file);
 // Close the file
 fclose(file);
 printf("Data written to the file 'student_data.bin'.\n");
 // Now, let's read the data from the file and display it on the screen
 // Open the file in binary read mode
 file = fopen("student_data.bin", "rb");
 if (file == NULL) {
 printf("Error opening file.\n");
 return 1;
 }
 // Read data from the file using fread
 struct Student studentsFromFile[n];
 fread(studentsFromFile, sizeof(struct Student), n, file);
 // Close the file
 fclose(file);
 // Display the data read from the file
 printf("\nData read from the file 'student_data.bin':\n");
 for (int i = 0; i < n; i++) {
 printf("Student %d:\n", i + 1);
 printf("Name: %s\n", studentsFromFile[i].name);
 printf("Marks:\n");
 for (int j = 0; j < 5; j++) {
 printf("Subject %d: %.2f\n", j + 1, studentsFromFile[i].marks[j]);
 }
 printf("----------------------------------\n");
 }
 return 0;
}