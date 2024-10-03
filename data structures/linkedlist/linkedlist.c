#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

void append(node** head,int data){
    node* newnode=(node*)malloc(sizeof(node));
    newnode->data=data;
    newnode->next=NULL;

    
        newnode->next=*head;
        *head=newnode;
    

}
void printnodes(node* headu){
    node* head =headu;
    while(head!=NULL){
        printf("%d->",head->data);
        head=head->next;
    }
    printf("NULL\n\n");
}
void freelist(node* head){
    node* temp=head;
    while(temp!=NULL){
        free(temp);
        temp=temp->next;
    }
}
void appendatend(node** head,int data){
    node* newnode=(node*)malloc(sizeof(node));
    newnode->data= data;
    newnode->next= NULL;

    if(*head==NULL){
        *head=newnode;
    }
    else{
        node* temp= *head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;

    }
}

int main(){
    node* head=NULL;
    int n;
    int ele;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        
        printf("Enter Element no. %d: ",i);
        scanf("%d",&ele);
        appendatend(&head,ele);

    }
    printnodes(head);

    return 0;
    
}