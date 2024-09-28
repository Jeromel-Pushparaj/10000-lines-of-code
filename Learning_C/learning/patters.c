#include<stdio.h>
int main(){
  int max;

  printf("How many rows:");
  scanf("%d",&max);
  // for(i=0;i<max;i++){
  //   for(j=0;j<max;j++)
  //     a[i][j]=c;
  // }
  for(int i=0;i<=max;i++)
  {
    for(int j=0;j<=max;j++)
    {
      if(i==0||i==max||j==0||j==max)
      {
        printf("*");
      }
      else
      printf(" ");
    }
    printf("\n");
  }
  return 0;
}
