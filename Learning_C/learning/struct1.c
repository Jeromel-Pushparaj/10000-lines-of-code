#include<stdio.h>
#include<stdlib.h>

struct dob{
  int d,m,y;
};

int main() {
  struct dob p1,p2;
  p1.d = 25;
  p1.m = 05;
  p1.y = 2005;
  p2.d = 06;
  p2.m = 10;
  p2.y = 2006;

  printf("person1:%d.%d.%d\n",p1.d,p1.m,p1.y);
  printf("person2:%d.%d.%d\n",p2.d,p2.m,p2.y);
}
