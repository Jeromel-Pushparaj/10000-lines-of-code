#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char s[], char t[]) {
    // Check if lengths of the two strings are different
    if (strlen(s) != strlen(t)) {
        return false;
    }

    int freq[26] = {0};  // Array to store the frequency of each character

    // Traverse both strings and update the frequency array
    for (int i = 0; i < strlen(s); i++) {
        freq[s[i] - 'a']++;  // Increment count for character in s
        freq[t[i] - 'a']--;  // Decrement count for character in t
    }

    // Check if all frequencies are zero
    for (int j = 0; j < 26; j++) {
        if (freq[j] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    char s[] = "ac";
    char t[] = "ac";

    if (isAnagram(s, t)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
