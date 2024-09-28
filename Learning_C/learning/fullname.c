//we are getting full name in this program use: %[^\n]

#include<stdio.h>
int main()
{
  char n[30];
  printf("Enter your fullname:");
  scanf("%[^\n]",n);
  printf("Your name:%s\n",n);

}
