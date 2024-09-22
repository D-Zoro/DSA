#include<iostream>
struct node{
    int data;
    node *next;
};

class linkedlist{
    node *head;
public:
    linkedlist(){
        head=nullptr;
    }
    void append(){
        static int count=1;
        int datu;
        std::cout<<"Enter data number "<<count<<std::endl;

        std::cin>>datu;
        node* newnode=new node;
        newnode->data=datu;
        newnode->next=nullptr;

        if(head==nullptr){
            head=newnode;
        }
        else{
            newnode->next=head;
            head=newnode;
        }

    count++;
        
    }
    void printnodes(){
        std::cout<<std::endl;
        node* headu =head;
        while(headu!=nullptr){
            std::cout<<headu->data<<"->";
            headu=headu->next;
        }
        std::cout<<"NULL\n";
    }
};
int main(){
    linkedlist a;
    int n;
    std::cout<<"Enter the number of elements :";
    std::cin>>n;

    while(n>=1){
        a.append();
        n--;
    }
    a.printnodes();
    return 0;
    
}