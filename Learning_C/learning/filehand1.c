#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch[20];
    fp = fopen("file.txt","w");
    printf("enter your string: ");
    scanf("%s",ch);
    fputs(ch,fp);
    fclose(fp);
}