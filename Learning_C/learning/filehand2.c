#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("file.txt","w");
    char ch = 'j';
    fputc(ch,fp);
    fclose(fp);
}