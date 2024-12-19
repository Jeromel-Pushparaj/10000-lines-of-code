#include<stdio.h>

int main(){
    int a;
    int b;

    printf("Enter a:");
    scanf("%d",&a);

    printf("Enter b:");
    scanf("%d",&b);

    if(a>b){
        printf("%d is a maximum number.\n",a);
    }else{
        printf("%d is a maximum number.\n",b);
    }
}