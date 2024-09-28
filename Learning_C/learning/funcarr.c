#include<stdio.h>
int size;
void fun(int a[])
{
    int i;
    printf("The values of arrays are:\n");
    for (i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
int main()
{
    int a[]={10,23,24,24};
    size =4;
    fun(a);

}
