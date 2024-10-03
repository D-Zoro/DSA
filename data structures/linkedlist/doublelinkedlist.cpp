#include<iostream>
struct node
{
    int data;
    node* next;
    node* prev;
};

class dll{
    private:
    node* head;
    public:
    dll():head(nullptr){}
    node* createnode(int data){
        node* newnode=new node;
        newnode->data=data;
        newnode->next=nullptr;
        newnode->prev=nullptr;
        return newnode;
    }
    void appendathead(int data){
        node* newnode=createnode(data);
        if(head==nullptr){
            head=newnode;
        }
        else{
           newnode->next=head;
           head->prev=newnode;
           head=newnode;
        }
    }
    void appendatend(int data){
        node* newnode=createnode(data);
        if(head==nullptr){
            head=newnode;
        }
        else{
            node* temp=head;
            while(temp->next!=nullptr){
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->prev=temp;
        }
    }
    void printlist(){
        node* temp=head;
        std::cout<<"NULL<->";
        while(temp!=nullptr){
            std::cout<<temp->data<<"<->";
            temp=temp->next;
        }
        std::cout<<"NULL"<<std::endl;
        
        node* temp2=head;
        while(temp2->next!=nullptr){
            temp2=temp2->next;
        }
        std::cout<<"NULL<->";
        while(temp2!=nullptr){
            std::cout<<temp2->data<<"<->";
            temp2=temp2->prev;
        }
         std::cout<<"NULL"<<std::endl;
    }
};

int main(){
    dll one;
    one.appendathead(34);
    one.appendatend(344);
    one.printlist();
    
}
