#include<stdio.h>
#include<stdlib.h>
#define MAX 4

int stack_arr[MAX];
int top = -1;//it's indicate the stack is empty

int isfull(){
    if(top == MAX-1){
        return 1;
    }
    return 0;
}
int isempty(){
    if(top == -1)
        return 1;
    return 0;
}

void push(int data){
    if(isfull()){
        printf("Stack overflow\n ");
        return;
    }
    top = top+1;
    stack_arr[top] = data;
}

int pop(){
    int value;
    if(isempty()){
        printf("Stack underflow\n");
        exit(1);
    }
    value = stack_arr[top];
    top = top-1;
    return value;
}
void print(){
    int i;
    if(isempty()){
        printf("Stack Underflow\n");
        return;
    }
    for(i=top;i>=0;i--)
        printf("%d ",stack_arr[i]);
    printf("\n");

}

int main(){
    int choice,data;
    while(1){
        printf("\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Print all the elements of the stack\n");
        printf("5. Quite\n");
        printf("Please enter your choice: \n");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                printf("Enter the element to be pushed: ");
                scanf("%d",&data);
                push(data);
                break;
            case 2:
                data = pop();
                printf("Deleted element is %d\n", data);
                break;
            case 3:
                printf("The top element of the stack is %d.",stack_arr[top]);
                break;
            case 4:
                printf("All the element in the stack are : ");
                print();
                break;
            case 5:
                exit(1);
                break;
        }


    }
    return 0;

    
}