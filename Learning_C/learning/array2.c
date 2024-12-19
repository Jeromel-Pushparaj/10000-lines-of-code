#include<stdio.h>
int main(){
  int x[50],i,max;
  printf("enter the no.of max value:");
  scanf("%d",&max);
  printf("Enter the array value:");
  for(i=0;i<max;i++)
    scanf("%d",&x[i]);
  printf("The values are:\n");
  for (i=0;i<max;i++)
    printf("%d\t",x[i]);
    printf("\n");
}
