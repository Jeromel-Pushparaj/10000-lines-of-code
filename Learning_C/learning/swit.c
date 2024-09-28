#include<stdio.h>
#include<stdlib.h>
int main(){
  while(1){
    int choice,a,b;
    printf("Enter you choice: ");
    scanf("%d",&choice);
    if(choice<3){
    printf("Enter a and b: ");
    scanf("%d%d",&a,&b);
    }

    switch (choice) {
      case 1:
      printf("addition of a+b = %d\n",a+b);
      break;
      case 2:
      printf("Difference between a-b=%d\n",a-b);
      break;
      case 3:
      exit(-1);
      default:
      printf("Error:Enter range 1-2\n");
      break;

    }
  }
}
