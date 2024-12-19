#include<stdio.h>
int modify(int *x)
{

  *x=*x*2;
  printf("*x address=%p\n",x);
}
int main()
{
  int a=10;
  modify(&a);
  printf("Modified a = %d, address = %p\n",a,&a);
}
