#include<stdio.h>

int main(){
    int arr[5],i;

    printf("Enter the 5 element: \n");

    for(i=0;i<5;i++){
        printf("Enter ELement %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n Elements are: \n");
    for(i=0;i<5;i++){
        printf("ELement %d: %d\n",i+1,arr[i]);
        
    }
    
}