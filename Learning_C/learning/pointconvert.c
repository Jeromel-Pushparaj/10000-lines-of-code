#include<stdio.h>
int main()
{
  int a[]={10,35,53,63};
  char b='k';
  char *cp;
  int *ptr,i;
  ptr =&b;
  cp = a;
  for(i=0;i<4;i++)
  {
    //here we are accessing the array directly from memorys
    printf("'%d' is a data of array and it is that address:%p.\n",*cp,cp);
    //here only we convert the pointer datatupe
    cp = (char *) ((int *)cp + 1);

  }
}
