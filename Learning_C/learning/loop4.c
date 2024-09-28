#include<stdio.h>
int main(){
  int inp;
  int dig;
  printf("Enter your values: ");
  scanf("%d",&inp);
  printf("I am from while loop.\n");
  // while (inp>0) {
  //
  //   dig = inp%10;
  //   printf("lsd: %d\n",dig);
  //   inp=inp/10;
  // }
  printf("I am from for loop.\n");
  for (dig = inp%10;inp>0;inp=inp/10) {
    dig = inp%10;
    printf("lsd: %d\n",dig);
  }
}
