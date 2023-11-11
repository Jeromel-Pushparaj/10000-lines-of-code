/*
Given a list of names, display the longest name.


Example:

Input:
N = 5
names[] = { "Geek", "Geeks", "Geeksfor",
  "GeeksforGeek", "GeeksforGeeks" }

Output:
GeeksforGeeks
 

Your Task:  
You don't need to read input or print anything. Your task is to complete the function longest() which takes the array names[] and its size N as inputs and returns the Longest name in the list of names.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to find the larger string between two strings
char* large(char* str1, char* str2) {
    return strlen(str1) > strlen(str2) ? str1 : str2;
}

int main() {
    int N = 5;
    char** names = (char**)malloc(N * sizeof(char*));
    names[0] = "Geekgeekgeekgeekgeek";
    names[1] = "Geeks";
    names[2] = "Geeksforffssffddssdsgeeksls";
    names[3] = "GeeksforGeek";
    names[4] = "GeeksforGeeks";

    // Initialize to an empty string, assuming there is at least one non-empty string in the array
    char* largest = names[0];

    int i = 0;
while (i < N) {
        char* b = names[i];
        largest = large(largest, b);
        i++;
    }

    printf("%s", largest);

    return 0;
}