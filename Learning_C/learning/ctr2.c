#include<stdio.h>
int main()
{

int a,b;
printf("Enter a and b:");
scanf("%d%d",&a,&b);

    if(a==b)
    {
        printf("Yes it is equal\n");
    }
    else if(a<b)
    {
        printf("a is less than b\n");
    }
    else if(a>b){
        printf("a is greater than b\n");
    }
    
    
}