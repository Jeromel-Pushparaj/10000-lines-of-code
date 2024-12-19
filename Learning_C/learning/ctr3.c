#include<stdio.h>
int main()
{
  int choice,a,b;
  printf("Enter you choice:");
  scanf("%d",&choice);
  printf("Enter a and b: ");
  scanf("%d%d",&a,&b);
  if (choice==1) {
    /* code */
    printf("addition of a+b = %d\n",a+b);

  }
  else if (choice==2) {
    /* code */
    printf("Difference between a-b=%d\n",a-b);
  }
  else if (choice==3) {
    /* code */
    printf("Multiplication of a*b =%d\n",a*b);

  }
  else if (choice==4) {
    /* code */
    printf("Quotiont od a/b = %d\n",a/b);
  }
  else if (choice==4) {
    /* code */
    printf("Quotiont od a/b = %d\n",a%b);
  }
  else{
    printf("Entered number is not in range 1 to 4\n");
  }


}
