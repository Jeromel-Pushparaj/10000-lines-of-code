#include<stdio.h>
int main(){
  int a=1,t;
  printf("Enter the table you want: ");
  scanf("%d",&t);
  int range;
  printf("Enter the range: ");
  scanf("%d",&range);

/*  do {
    printf("%d",a);
    printf("X%d",t);
    printf("=%d\n",a*t);
    a+=1;
  } while(a<=range);
  */
  for (a = 1; a <=range; a++) {
    /* code */
    printf("%d",a);
    printf("X%d",t);
    printf("=%d\n",a*t);
  }
}
