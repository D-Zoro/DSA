#include<iostream>
struct node{
    int data;
    node *next;
};
int main(){
    node* first=new node;
    first->data=20;

    node*second=new node;
    second->data=30;

    node* third=new node;
    third->data=40;

    first->next=NULL;
    second->next=first;
    third->next=second;

    node* temp = third;
    while(temp){
        std::cout<<temp->data<<"->";
        temp=temp->next;

    }
    std::cout<<"NULL";
    return 0;

    
}