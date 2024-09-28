/*
a = 4 => 0100
b = 2 => 0010
        ------
a & b => 0000
a | b => 0110
a ^ b => 0110
*/

#include<stdio.h>
int main()
{

int a,b,c;
printf("Enter a,b&c:");
scanf("%d%d%d",&a,&b,&c);
printf("It is a&b = %d\n",a&b);
printf("It is a|b = %d\n",a|b);
printf("It is a^ b = %d\n",a^b);
printf("It is left shift = %d\n",c>>1);
printf("It is right shift = %d\n",c<<1);
}
