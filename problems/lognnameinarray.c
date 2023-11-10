/*
Given a list of names, display the longest name.


Example:

Input:
N = 5
names[] = { "Geek", "Geeks", "Geeksfor",
  "GeeksforGeek", "GeeksforGeeks" }

Output:
GeeksforGeeks
 

Your Task:  
You don't need to read input or print anything. Your task is to complete the function longest() which takes the array names[] and its size N as inputs and returns the Longest name in the list of names.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char large(char a[30], char b[30]){
  int al = strlen(a);
  int bl = strlen(b);
  if(al>bl)
    return a[30];
  else
    return b[30];
}
int main(){
    int N = 5;
    char names[N][30] = { "Geek", "Geeks", "Geeksfor","GeeksforGeek", "GeeksforGeeks" };
    for(int i=0;i<N;i++){
        char a[30]=name[i];
        char b[30]=name[i+1];
        char c[30]=large(a,b);
    }
    printf("%s",c);
}