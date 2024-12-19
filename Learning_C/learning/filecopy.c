#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
    fp1 = fopen("file1.txt","r");
    fp2 = fopen("file2.txt","w");
    char c;

    while(1)
    {
        c = fgetc(fp1);
        if(c!=EOF)
            fputc(c,fp2);
        else
            break;
    }
    printf("file content copied successfully.\n");
    fclose(fp1);
    fclose(fp2);
    
    
}