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

void insertAtHead(Node* &head,Node* &tail,int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(data);
        newNode-> next = head;
        head = newNode;
    }
}

void insertAtTail(Node* &head,Node* &tail,int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data <<" ";
        temp = temp->next;
    }
}

int findlength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
       temp = temp->next;
       len++; 
    }
    return len;
}

void insertatposition(int data, int position,Node* &head,Node* &tail){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    if(position == 0){
        insertAtHead(head,tail,data);
        return;
    }
    int len = findlength(head);
    

    if(position >= len){
        insertAtTail(head,tail,data);
        return;
    }
    int i=1;
    Node* prev = head;
    while(i < position){
        prev = prev->next;
        i++;
    }
    Node* curr = prev -> next;
    Node* newNode = new Node(data);
    newNode -> next = curr;
    prev -> next = newNode;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,50);
    insertAtHead(head,tail,60);
    insertAtHead(head,tail,90);
    insertAtTail(head,tail,77);

    print(head);
    cout<<endl;
    cout<<"head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;

    insertatposition(101, 1, head, tail);
    cout<<"printing after at position at call"<<endl;
    print(head);
    cout<<endl;
    cout<<"head"<< head ->data <<endl;
    cout<<"tail"<< tail ->data <<endl;
 
    return 0;
}