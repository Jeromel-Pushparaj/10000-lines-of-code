#include<stdio.h>
int main()
{
  char a[]={'j','e','r','o','m'};
  char *ptr;
  int i;
  ptr = a;
  for(i=0;i<5;i++)
  {
    //here we are accessing the array directly from memorys
    printf("'%c' is a data of array and it is that address:%p.\tvalue of a is '%c'\n",*ptr,ptr,a[i]);
    ptr = ptr + 1;
  }
}
