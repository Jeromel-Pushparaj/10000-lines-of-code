//function with argument and with return value
#include<stdio.h>
int multiple(int x,int y)
{
  return x*y;
}
int main()
{
  int a,b;
  printf("Enter a and b: ");
  scanf("%d%d",&a,&b);
  printf("Multiple of a and b = %d\n",multiple(a,b));

}
