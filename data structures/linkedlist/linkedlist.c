#include<stdio.h>
#include<stdlib.h>
//insertion from front;


typedef struct node{
    int data;
   struct node* next;
}node;
node* createmem(int data){
    node* newnode=(node*)malloc(sizeof(node));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}
void addele(node** head,int data){
    node* newnode = createmem(data);
    newnode->next=*head;
    *head=newnode;
}
void printn(node* head){
    node* current =head;
    printf("Head->");
    while(current !=NULL){
        printf("%d->",current->data);
        current=current->next;
    }
    printf("NULL\n");
}



int main(){
    node* head= NULL;
    addele(&head,340);
    addele(&head,34);
    addele(&head,322);
    printn(head);
    return 0;

}