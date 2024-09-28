#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("file.txt","w");
    char ch[40];
    int i;

    printf ("Enter your string: ");
    scanf("%[^\n]",ch);

    for(i=0;ch[i]!='\0';i++)
    {
        fputc(ch[i],fp);
    }
    fclose(fp);
}