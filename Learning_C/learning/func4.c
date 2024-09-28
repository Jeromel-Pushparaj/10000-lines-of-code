//fucntion with argument and without returning value
#include<stdio.h>
int multiple_table(int n)
{
  int i;
  for(i=1;i<12;i++)
    printf("%dx%d=%d\n",i,n,i*n);
}

int main()
{
  int con=1;
  while (con>0) {
    /* code */
    int n;
    printf("Enter which table do you need: ");
    scanf("%d",&n);
    multiple_table(n);
    printf("continue=1 or quite=0: ");
    scanf("%d",&con);
  }
}
