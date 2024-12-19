#include<stdio.h>
void updating(int *p)
{
    int i;
    printf("The address:%p\n",p);
    for(i=0;i<4;i++)
       // p[i] = p[i]*10; you can write this same state like below line
       *(p + i) = *(p + i) *10;
}
int main()
{
    int a[]={2,5,6,3};
    int i;
    printf("The address:%p\n",&a);
    updating(a);
    printf("the updated array is:\n");
    for(i=0;i<4;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    
}