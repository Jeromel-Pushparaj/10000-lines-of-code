#include<stdio.h>
#include<stdlib.h>
struct dob{
  int d,m,y;
};
int main(){
  struct dob p[3];
  int i;
  for(i=1;i<5;i++){
    printf("Enter DOB date month year:");
    scanf("%d%d%d",&p[i].d,&p[i].m,&p[i].y);
  }
  for (i=1;i<4;i++){
    printf("person%d:%d.%d.%d\n",i,p[i].d,p[i].m,p[i].y);
  }

}
