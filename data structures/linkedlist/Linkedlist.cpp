#include<iostream>
struct node{
    int data;
    node* next;
};
class linkedlist{
    node* head, *tail;

    public:
    linkedlist(){
        head=nullptr;
    }
    void append(int data){
        node* newnode= new node;
        newnode->data=data;
        newnode->next=nullptr;

        if(head=nullptr){
            head=newnode;
        }
        else{
            head->next=newnode;
            head=head->next;
        }
    }
    void printnodes(){
        while(head->next!=nullptr){
            std::cout<<head<<"->";
        }
        std::cout<<"null";
    }
};

int main(){
    linkedlist a;
    a.append(10);
    a.append(30);
    a.append(4);
    a.printnodes();

    return 0;
}

