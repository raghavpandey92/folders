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
    node* a = head;
    while(a != NULL){
        cout<< a->data<<" ";
        a = a->next;
    }
}
void inserthead(node* &head, int data){
    if(head == NULL){
        node* naya = new node(data);
        head = naya;
    }
    else{
        node* naya = new node(data);
        head->prev = naya;
        naya->next = head;
        head = naya;
    }
    
}
void inserttail(node* &head, int data){
    node* a = new node(data);
    node* b = head;
    while(b->next != NULL){
        b = b->next;
    }
    b->next = a;
    a->prev = b;
    //b = a;
    a->next = NULL;
}

int getlength(node* &head){
    node* temp = head;
    int count = 0 ;
    while(temp!= NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void anyposition(node* &head, int data, int index){
    if(index == 1){
        node* a = new node(data);
        inserthead(head ,data);
    }
    else{
        int len = getlength(head);
        if(index == len+1){
            inserttail(head,data);
        }
        else{

            node* z = new node(data);
            node* prev = NULL;
            node* curr = head;
            while(index != 1){
               index--;
               prev = curr;
               curr = curr->next;
            }
            prev->next = z;
            z->prev = prev;
            z->next = curr;
            curr->prev = z;
        
        }
        
    }
}

int main(){
    node* head = NULL;
    //node* tail = NULL;
    inserthead(head,11);
    inserthead(head,22);
    inserthead(head,33);
    inserthead(head,44);
    inserthead(head,55);
    print(head);
    cout<<endl;
    cout<<"after inserting a node :"<<endl;
    inserttail(head,66);
    inserttail(head,69);
    inserttail(head,68);
    print(head);
    cout<<endl;
    cout<<"when insert a node:"<<endl;
    anyposition(head,90,9);
    //anyposition(head,79,2);
    print(head);
}