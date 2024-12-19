#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t) {
    // Check if the lengths of the strings are different
    if (strlen(s) != strlen(t)) {
        return false;
    }

    // Initialize frequency array to 0
    int freq[26] = {0};

    // Iterate through the characters of both strings
    for (int i = 0; i < strlen(s); i++) {
        freq[s[i] - 'a']++;  // Increment frequency for s
        freq[t[i] - 'a']--;  // Decrement frequency for t
    }

    // Check if all frequencies are 0
    for (int j = 0; j < 26; j++) {
        if (freq[j] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    char s[] = "ac";
    char t[] = "ca";
    
    bool result = isAnagram(s, t);
    if (result) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
