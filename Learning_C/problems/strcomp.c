#include <stdio.h>
#include <string.h>

// Function to compare two strings using pointers
int compareStrings(const char *str1, const char *str2) {
    while (*str1 && *str2 && *str1 == *str2) {
        str1++;
        str2++;
    }

    // Compare the ASCII values of the characters to determine the result
    if (*str1 < *str2) {
        return -1; // str1 comes before str2
    } else if (*str1 > *str2) {
        return 1; // str1 comes after str2
    }

    return 0; // Both strings are equal
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    int result = compareStrings(str1, str2);

    if (result == 0) {
        printf("Both strings are equal.\n");
    } else if (result < 0) {
        printf("Second string is larger than first.\n");
    } else {
        printf("First string larger than second.\n");
    }

    return 0;
}
