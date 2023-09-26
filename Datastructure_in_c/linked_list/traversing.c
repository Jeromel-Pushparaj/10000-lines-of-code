#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void count_of_node(struct node *head){
    int count = 0;
    if(head==NULL)
        printf("The linked list is empty");
    struct node *ptr = head;
    while(ptr != NULL){
        count++;
        ptr = ptr->link;
    }
    printf("%d\n",count);
}
void printing_data(struct node *head){
    if(head==NULL)
        printf("The linked list is empty");
    struct node *ptr = head;
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr = ptr->link;
    }    
}

int search_value(struct node *head,int value){
    int n = 1;
    if(head==NULL)
        printf("The given linked list is empty.");
    struct node *ptr = head;
    while(ptr!=NULL){
        if(ptr->data==value){
            return n;
        }
        n++;

    }
return 0;
}

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
    count_of_node(head);
    printing_data(head);

    int value,node_n;
    value = 53;
    node_n = search_value(head,value);
    if(node_n>0){
        printf("The given value is found in node :%d",node_n);

    }else{
        printf("The given value is not found.");
    }
}
