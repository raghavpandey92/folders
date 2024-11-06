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
        head = newnode;
        
    }
    else{
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

node*addTail(node*head,int data){
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
node* addbetween(node* head,int data,int index){
    node* newnode = new node(data);
    node* ptr = head;
    int i=0;
    while(i!=index-1){
        ptr = ptr->next;
        i++;
        }
        newnode->next = ptr->next;
        ptr->next=newnode;
        return(head);

}

// node* addbetween(node* head,int data,int index){
//     node* newnode = new node(data);
//     node* ptr = head;
//     node* ptr1 = head->next;
//     int i=0;
//     while(i!=index && head!=nullptr){
//         ptr = ptr1;
//         ptr1 = ptr1->next;
//         i++;
//         }
//         newnode->next = ptr1;
//         ptr->next = newnode;
//         return(head);

// }


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
   //addhead(head,87);
    //print(head);
    cout<<endl;
    cout<<"add element at last :"<<endl;
    addTail(head,56);
    addTail(head,13);
    print(head);
    cout<<endl;
    addbetween(head,77,2);
    print(head);
    cout<<endl;
    addbetween(head,7,6);
    print(head);
    cout<<endl;

    addbetween(head,99,1);
    print(head);
    cout<<endl;
    addbetween(head,0,10);
    print(head);
    

}