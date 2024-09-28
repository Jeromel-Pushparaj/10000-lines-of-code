#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp = fopen("arrpoint.c","r");
    char ch;

    if(fp==NULL)
    {
        printf("Error.....File dosn't exist\n");
        exit(1);
    }
    else
    {
        while(1)
        {
            ch = fgetc(fp);
            if(ch!=EOF)
            { 
                printf("%c",ch);
            }
            else
                break;
                
            
        }
        fclose(fp);
    }
}