/*
Given a string S. The task is to convert characters of string to lowercase.

Example 1:

Input: S = "ABCddE"
Output: "abcdde"
Explanation: A, B, C and E are converted to
a, b, c and E thus all uppercase characters 
of the string converted to lowercase letter.
Example 2:

Input: S = "LMNOppQQ"
Output: "lmnoppqq"
Explanation: L, M, N, O, and Q are 
converted to l, m, n, o and q thus 
all uppercase characters of the 
string converted to lowercase letter.
*/
#include<stdio.h>
#include<string.h>


int main(){
    char c[30];
    scanf("%s",c);
    // c = "%d",c;
    for(int i;i<strlen(c);i++){
        if(c[i]>=65 && c[i]<=90){
            printf("%c",c[i]+32);
        }else{
            printf("%c",c[i]-32);
        }
    }
    
}
