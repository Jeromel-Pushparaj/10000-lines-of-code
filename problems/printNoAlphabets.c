#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("You entered: %s", str);

    int length = sizeof(str) / sizeof(str[0]); 

    for(int i=0;i<length; i++){
        char c = str[i];
        for(int i=0;i<str[i+1];i++){
        if(c >= 97 && c <= 122){
            if(c >= 48 && c<=57){
                continue;
            }
            printf("%c",c);
        }
        }
        
    }


    return 0;
}