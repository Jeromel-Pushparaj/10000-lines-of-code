#include <stdio.h>

int compareStrings(const char *s1, const char *s2) {
    while (*s1 && *s2 && *s1 == *s2) {
        s1++; //here the str1 will increase by one by one char
        s2++;   //here the str2 will increase by one by one char
    }

    return (*s1 == *s2) ? 0 : ((*s1 > *s2) ? 1 : -1);// line is siple if the first condition is true 0 will return false means after the : will excute
}

int main() {
    char str1[100], str2[100];

    printf("Enter two strings:\n");
    scanf("%s %s", str1, str2);

    int result = compareStrings(str1, str2);

    if (result == 0) {
        printf("Both strings are equal.\n");
    } else if (result > 0) {
        printf("First string is greater.\n");
    } else {
        printf("Second string is greater.\n");
    }

    return 0;
}
