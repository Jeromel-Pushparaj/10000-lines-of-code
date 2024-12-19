#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("file1.txt","w");
    int i;
    char ch[50];

    printf("Enter your string: ");
    scanf("%[^\n]",ch);

    for(i=0;ch[i]!='\0';i++)
    {
        fputc(ch[i],fp);
    }
    printf("File writing is succesfull");
    fseek(fp,0,SEEK_SET);
    printf("It is writen content:\n%s\n",ch);
    fclose(fp);

}