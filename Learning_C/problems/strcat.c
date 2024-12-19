#include<stdio.h>
#include<string.h>

int main(){
    char str1[30],str2[30],cat[30];

    printf("Enter the str1: ");
    scanf("%s",str1);

    printf("Enter the str2: ");
    scanf("%s",str2);

    

    printf("The Concatenate string is '%s'.\n",strcat(str1,str2));

    
}