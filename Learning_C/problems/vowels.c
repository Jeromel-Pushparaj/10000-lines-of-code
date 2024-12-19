// #include<stdio.h>

// int main(){
//     char c;

//     printf("Enter the char: ");
//     scanf("%c",&c);

//     switch(c){
//         case 'a':
//             printf("It's a vowel.");
//             break;
//         case 'e':
//             printf("It's a vowel.");
//             break;
//         case 'i':
//             printf("It's a vowel.");
//             break;
//         case 'o':
//             printf("It's a vowel.");
//             break;
//         case 'u':
//             printf("It's a vowel.");
//             break;
//         case 'A':
//             printf("It's a vowel.");
//             break;
//         case 'E':
//             printf("It's a vowel.");
//             break;
//         case 'I':
//             printf("It's a vowel.");
//             break;
//         case 'O':
//             printf("It's a vowel.");
//             break;
//         case 'U':
//             printf("It's a vowel.");
//             break;
//         default:
//             printf("It's a consonant.");
//             break;
//     }
// }

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Convert the character to lowercase for easier comparison
    ch = tolower(ch);

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            if (ch >= 'a' && ch <= 'z') {
                printf("%c is a consonant.\n", ch);
            } else {
                printf("Invalid input.\n");
            }
    }

    return 0;
}
