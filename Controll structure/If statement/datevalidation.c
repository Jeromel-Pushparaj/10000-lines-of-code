#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int isleap(int y){
    if((y%4==0 && y%100!=0)||(y%400==0)){
        return 1;
    }else{
        return 0;
    }
}
int isvalid(int d, int m ,int y){
    if (y <= 1900 || y >= 1999) {
        return 0; 
    }
    if (m <= 1 || m >= 12) {
        return 0;
    }
    if(m%2==0 && m!=8){
        if (d <= 1 || d >= 30) {
            return 0;
        }
    }else if(m == 2){
        if(isleap(y)){
            if(d < 1 || d > 30)
                return 0;
        }
    }if(m%2!=0 && m!=8){
        if (d <= 1 || d >= 31) {
            return 0;
        }
    }
    return 1;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int d,m,y;
    scanf("%d/%d/%d",&d,&m,&y);
    
    if(isvalid(d,m,y))
        printf("Valid");
    else
        printf("Invalid");
     
    return 0;
}