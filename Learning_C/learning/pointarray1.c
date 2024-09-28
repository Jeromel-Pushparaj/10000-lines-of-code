#include<stdio.h>
int main()
{
  int a[]={10,35,53,63};
  int *ptr,i;
  ptr = a;
  for(i=0;i<4;i++)
  {
    //here we are accessing the array directly from memorys
    printf("'%d' is a data of array and it is that address:%p.\tvalue of a is '%d'\n",*ptr,ptr,a[i]);
    ptr = ptr + 1;
  }
}
