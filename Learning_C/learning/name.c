#include<stdio.h>
int main(){
  char n[10];
  int i;
  printf("Enter your name:");
  for(i=0;i<7;i++)
    scanf("%c",&n[i]);
  n[i]='\0';
  printf("Hello,%s\n",n);

}
