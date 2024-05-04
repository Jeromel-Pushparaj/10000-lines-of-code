#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int ispalindrome(char * string){
    bool result = false;
    int i = 0;
    int j = strlen(string)-1;
    while(j!=-1){
        if(string[i]==string[j]){
            result = true;
        }
        else{
            result = false;
        }
        i++;
        j--;
    }
     
    return result;
}

void main(){
    char s[20];
    printf("Enter the string: ");
    scanf("%s", s);

    bool result = ispalindrome(s);
    if(result==true){
        printf("\n%s is a plaindrom\n",s);
    }
    else{
        printf("\n%s is not a plaindrom\n",s);
    }
}