#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

int main(){
    struct node *head = (struct node *)malloc(sizeof(struct node));//NOw, head has the address of the first node
    head->data = 35;
    head->link=NULL;

    struct node *current = (struct node *)malloc(sizeof(struct node));//it is the address of the second node
    current->data = 46;
    current->link = NULL;
    head->link = current;//Now the second node address is store in node one adrdess colum box
    

    current = (struct node *)malloc(sizeof(struct node));
    current->data= 53;
    current->link=NULL;

    head->link->link = current;

}
