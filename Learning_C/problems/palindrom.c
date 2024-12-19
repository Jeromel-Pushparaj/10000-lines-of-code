#include<stdio.h>


int palindrome(int num){
    int reversedNum=0,remainder,orinum;
    orinum = num;
    while (num > 0) {
        
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    if(reversedNum==orinum){
        printf("It's the palindrome.\n");
    }else{
        printf("It's not a palindrome.\n");
    }
    
}
int main(){
    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    palindrome(num);
    
}