#include<stdio.h>
#include<stdlib.h>

int isleap(int y){
    if((y%4==0 && y%100!=0)||(y%400==0)){
        return 1;
    }else{
        return 0;
    }
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int d,m,y;
    scanf("%d/%d/%d",&d,&m,&y);
    
    if(y>=1900&&y<=9999&&m>=1&&m<=12){
        if(d>=1&&d<=31&&(m==1||m==3||m==5||m==7||m==8||m==10||m==12))
            printf("Valid");
        else if(d>=1&&d<=30&&(m==4||m==6||m==9||m==11))
            printf("Valid");
        else if(d>=1&&d<=29&&m==2&&isleap(y))
            printf("Valid");
        
        else
            printf("Invalid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}