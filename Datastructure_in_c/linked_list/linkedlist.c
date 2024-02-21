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
    printf("\n");
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
        ptr = ptr->link;

    }
return 0;
}

int add_node_end(struct node *head, int value){
    struct node *ptr, *temp;
    ptr = head;
    temp = (struct node *)malloc(sizeof(struct node));

    temp->data = value;
    temp->link = NULL;

    while(ptr->link != NULL){
        ptr = ptr->link;
    }
    ptr->link = temp;
}

int add_node_beg(struct node **head, int value){ //here ** means we are using a second pointer to access the address of the head 
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = value;
    ptr->link = NULL;

    ptr->link = *head;//through that head second pointer we can access the value of the head that is address of the old first node 
    *head = ptr;
}

int insert_before_node(struct node *head, int pos, int value){
    struct node *ptr = head;
    struct node *ptr2 = (struct node *)malloc(sizeof(struct node));
    ptr2->data = value;
    ptr2->link = NULL;

    pos--;
    while(pos !=1){
        ptr = ptr->link;
        pos --;
    }
    ptr2->link = ptr->link;
    ptr->link = ptr2;
}
int insert_after_node(struct node *head, int pos, int value){
    struct node *ptr = head;
    struct node *ptr2 = (struct node *)malloc(sizeof(struct node));
    ptr2->data = value;
    ptr2->link = NULL;
    int t=1;

    while(t != pos){
        ptr = ptr->link;
        t++;
    }
    ptr2->link = ptr->link;
    ptr->link = ptr2;
}
struct node * del_first_node(struct node *head){
    if(head==NULL){
        printf("The linked list is already empty");
    }else{
        struct node *tmp = head;
        head = head->link;
        free(tmp);
        tmp = NULL;
        return head;
    }
}

struct node * del_last_node(struct node *head){
    if(head==NULL){
        printf("The linked list is already empty");
    }else if(head->link == NULL){
        free(head);
        head = NULL;
    }else{
        struct node *tmp = head;
        struct node *tmp2 = head;

        while(tmp->link != NULL){
            tmp2 = tmp;
            tmp = tmp->link;

        }
        tmp2->link = NULL;
        free(tmp);
        tmp = NULL;
    }
    return head; 
}

void del_pos(struct node **head,int pos){
    struct node *previouse = *head;
    struct node *current = *head;

    if(*head==NULL){
        printf("Linked list is already emtpy!");
    }else if(pos == 1){
        *head = current->link;
        free(current);
        current = NULL;

    }else{
        while(pos != 1){
            previouse = current;
            current = current->link;
            pos--;
        }
        previouse->link = current->link;
        free(current);
        current = NULL;

    }

}

struct node * del_entire_list(struct node *head){
    struct node *temp = head;
    while(temp != NULL){
        temp = temp->link;
        free(head);
        head = temp;//IN the end to make the head NUll just give temp value it's automaticaly became NULL by loop
    }
    return head;
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

    printf("Adding node in beg...\n");
    add_node_beg(&head,31);//here through giving &head we send the pointer of the head to the fuction.
    printf("Adding node in before given position...\n");
    insert_before_node(head,4,25);
    printf("Adding node in after given position...\n");
    insert_after_node(head,4,06);
    printf("Adding node in ending...\n");
    add_node_end(head,58);
    printf("Counting number of node present in list...\n");
    count_of_node(head);
    printf("printing the datas in the linked list...\n");
    printing_data(head);


    int value,node_n;
    value = 53;
    printf("Searching the value: %d...\n",value);
    node_n = search_value(head,value);
    if(node_n>0){
        printf("The given value is found in node :%d\n",node_n);

    }else{
        printf("The given value is not found.");
    }

    //deleting first node in the linked list
    printf("Deleting first node...\n");
    head = del_first_node(head);
    printf("Data After deleting: ");
    printing_data(head);
    
    printf("Deleting last node...\n");
    head = del_last_node(head);
    printf("Data After deleting: ");
    printing_data(head);
    
    printf("Deleting given node...\n");
    del_pos(&head,2);
    printf("Data After deleting: ");
    printing_data(head);

    printf("Deleting Linked list Completely...\n");
    head = del_entire_list(head);
    if(head==NULL)
        printf("The linked list is Deleted successfully.\n");

    printf("Checking all node is Deleted by printing the node...\n");
    printing_data(head);
    return 0;
    

    
}