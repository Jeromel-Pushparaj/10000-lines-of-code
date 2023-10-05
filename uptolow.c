#include<stdio.h>

int main(){
    char c;
    scanf("%c",&c);
    // c = "%d",c;

    if(c>=65 && c<=90){
        printf("%c",c+32);
    }else{
        printf("%c",c-32);
    }
    
}
