#include<stdio.h>
int main()
{

int a,b;
printf("Enter a,b:");
scanf("%d%d",&a,&b);
printf("a AND B = %d\n",a&&b);
printf("a OR B = %d\n",a||b);
printf("a NOT B = %d\n",!(a!=b));

}