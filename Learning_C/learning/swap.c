#include<stdio.h>
int swap(int *p,int *p1)
{
  int t;
  t = *p ;
  *p = *p1;
  *p1 = t ;

}
int main(){
  int a=10,b=64;
  swap(&a,&b);
  printf("a = %d\tb = %d\n",a,b);
}
