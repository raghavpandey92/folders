#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;

    node(){
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

};
void print(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}
void insert(node* &head, int data){
    if(head == NULL){
        node* naya = new node(data);
        head = naya;
        cout<<"head is null :"<<endl;
    }
    else{
        node* naya = new node(data);
        head->prev = naya;
        naya->next = head;
        head = naya;
    }
    
}
void deletenode(node* &head,int position){
    if(head == NULL){
        cout<<"LL is empty :"<<endl;
        return;
    }
    else if(position == 1){
        node* temp = head;
        head = head->next;
        temp->next = NULL;
        head->prev = NULL;
        delete temp;
    }
    else{
        node* prev = NULL;
        node* curr = head;
        node* front = curr->next;
        while(position != 1){
            position--;
            front = front->next;
            prev = curr;
            curr = curr->next;
        }
        prev->next = front;
        curr->prev = NULL;
        curr->next = NULL;
        front->prev = prev;
        delete curr;
    }
}
int main(){
    node* head = NULL;
    node* tail = NULL;
    insert(head,20);
    insert(head,30);
    insert(head,40); 
    insert(head,50);
    insert(head,60);
    print(head);
    cout<<endl;
    deletenode(head,1);
    print(head);
    cout<<endl;
    //cout<<"now ll is empty";
    deletenode(head,2);
    print(head);
    cout<<endl;
    deletenode(head,1);
    print(head);
    cout<<endl;
    deletenode(head,2);
    print(head);
    cout<<endl;
    deletenode(head,1);
    print(head);
    cout<<endl;
    cout<<"all are delete :";
}










