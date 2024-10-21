#include<stdio.h>
typedef struct node{
    int data;
    struct node* next;
    struct node* prev;
}node;

node* hosanode(int data){   //to create a hosa node
    node* newnode=(node*)malloc(sizeof(node));
    if(newnode==NULL){
        printf("ERROR(in memory alloc)\n");
        return;
    }
    newnode->data=data;
    newnode->next=NULL;
    newnode->prev=NULL;
    return newnode;
}

void insertstart(node **head,int data){
    node* tempnode=hosanode(data);

    if(*head==NULL){
        *head=tempnode;
        return;
    }
    *head->prev=tempnode;
    tempnode->next=*head;
    *head=tempnode;
}

void insertend(node** head,int data){
    node* tempnode=hosanode(data);
    node* temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=tempnode;
    tempnode->prev=temp;
}

void deletend(node** head){
    if(*head==NULL){
        printf("Empty list\n");
        return;
    }

    node* temp=*head;

    if(temp->next==NULL){// if only one node
        free(temp);
        *head=NULL;
        return;
    }

    
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    node* temp2=temp->next;
    temp->next=NULL;
    free(temp2);

}

void deletestart(node** head){
    if(*head==NULL){
        printf("EMPTY\n")
        return;
    }

    node* temp=*head;
    *head=*head->next;
    free(temp);

    if(*head!==NULL){
        *head->prev=NULL;
    }
}

void traverse(node* head){
    node*temp=head;
    while(temp!=NULL){
        printf("%d<->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
   
}

void displayrev(node *head){
    if(*head==NULL){
        printf("EMPTY\n")
        return;
    }

    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    printf("NULL<->");
    while(temp!=NULL){
        printf("%d<->",temp->data);
        temp=temp->prev;
    }
    printf("\n");

}

node* listconnect(node*head1,node*head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    node*temp=head1;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=head2;
    head2->prev=temp;

    return head1;
}

void insertb4key(node** head,int data,int key){
    node*insrtnode=hosanode(data);
    if(*head==NULL){
        printf("NO SUCH KEY\n");
        return;
    }
    node*temp =*head;
    if(temp->data==key){
        insertstart(head,data);
        return;//inserting at start only
    }
    while(temp->next!=NULL && temp->next->data!=key){
        temp=temp->next;
    }
    if(temp->next==NULL){
        printf("NO SUCH KEY\n");
        return;
    }
    
    temp->next->prev=insrtnode;
    insrtnode->next=temp->next;

    temp->next=insrtnode;
    insrtnode->prev=temp;

}