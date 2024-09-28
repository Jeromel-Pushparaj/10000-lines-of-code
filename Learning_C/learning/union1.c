#include<stdio.h>
union name {

  char n[30];
};
int main()
{
  union name p[4];
  int i;
  for(i=1;i<4;i++){
    printf("Enter name of the person:");
    scanf("%s",p[i].n);
  }
  for (i=1;i<4;i++){
    printf("Person%d:%s\n",i,p[i].n);
  }
}
