// INSERT AT HEAD AND TAIL IN LINKEDLIST //


#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(){
        this->data = 0;
        this->next = nullptr;
    }
    node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

void makell(node* &head, int data){
    node* newnode = new node(data);
    if(head == nullptr){
        //node* newnode = new node(data);
        head = newnode;
        cout<<"node is null :"<<endl;
        
    }
    else{
        node* newnode = new node(data);
       node* temp = head;
       while(temp->next!= nullptr){
        temp = temp->next;
        }
        temp->next = newnode; 
    }
}
void addhead(node* &head,int data){
    node* newnode = new node(data);
    newnode->next = head;
    head = newnode;
}

node*addTail(node* &head,int data){
    node* newnode = new node(data);
    node*ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next = newnode;
    newnode->next=NULL;
    ptr = newnode;
    return head;
}

void print(node* head){
    node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    node* head = nullptr;
    makell(head,10);
    makell(head,20);
    makell(head,30);
    makell(head,40);
    makell(head,50);
    print(head);
    cout<<endl;
    cout<<"adding an element at start:"<<endl;
    addhead(head,87);
    print(head);
    cout<<endl;
    cout<<"add element at last :"<<endl;
    addTail(head,56);
    print(head);

}