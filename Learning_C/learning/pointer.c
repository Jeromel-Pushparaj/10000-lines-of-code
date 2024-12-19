#include<stdio.h>
int main()
{
  int a=25;
  int *ptr;
  ptr = &a;
  printf("value of a::%d\n",a);
  //you can access the value by ptr also
  printf("%d it is data in address: %p\n",*ptr,ptr);
  //updating the physical value
  *ptr = *ptr/5;
  printf("Updated value from memory:%d,value from variable:%d\n",*ptr,a);
}
