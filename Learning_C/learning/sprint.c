#include<stdio.h>
#include<stdlib.h>
int main() {
  char buf[10];
  int x;
  printf("Enter x: ");
  scanf("%d",&x);
  sprintf(buf,"%d",x);
  printf("it is from sprint %s\n",buf);
}
