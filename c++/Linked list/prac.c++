#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data = 0; 
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void printLL(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}

void inserthead(Node* &head,Node* &tail,int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    
    else{
        Node* newNode = new Node(data);
        newNode -> next = head;
        head = newNode;
    }
}
void inserttail(Node* &head,Node* &tail,int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(data);
        tail -> next = newNode;
        tail = newNode;
    }
}
void createtail(Node* head,Node* tail){
    Node* temp = head;
    while(temp -> next != NULL){
        temp = temp->next;
    }
    tail = temp;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    inserthead(head,tail,10);
    inserthead(head,tail,20);
    inserthead(head,tail,30);
    inserthead(head,tail,40);
    inserttail(head,tail,5000);
    inserttail(head,tail,5500);
    
    printLL(head);
}