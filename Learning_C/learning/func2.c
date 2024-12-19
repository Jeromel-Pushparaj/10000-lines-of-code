#include<stdio.h>
//fucntion without argument with returns the value
//it's nothing but saying function to workby itself

int addition()
{
  int x,y;
  printf("Enter two number x and y: ");
  scanf("%d%d",&x,&y);
  return x+y;
}
int main()
{
  printf("Addition of x and y = %d\n",addition());
}
