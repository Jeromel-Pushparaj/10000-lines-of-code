#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("file.csv","w");
    int S_no=23;
    char name[10]="jeromel";
    int exp=10;

    fprintf(fp,"NO., NAME., EXP.,\n");
    fprintf(fp,"%d, %s, %d\n",S_no,name,exp);
}