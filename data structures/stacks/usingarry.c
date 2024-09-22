#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node next*;
}node;

node* newnode(int data){
    node* newnod=(node*)malloc(sizeof(node));
    newnode->data=data;
    newnod->next=NULL;
    return newnod;
}

void append(node **head,int data){
    node* hosanode=newnode();

    hosanode->next=*head;
    *head=hosanode;
    
}

