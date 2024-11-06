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
void print(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
        
    }
}
void insertnode(Node* &head, int data){
    if(head == NULL){
        Node* a = new Node(data);
        head = a;
    }
    else{
        Node* x = new Node(data);
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = x;
        
        // x->next = head;
        // head = x;
    }
    
}
Node* reverse(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    while(curr!= NULL){
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int main(){
    Node* head = NULL;
    insertnode(head,10);
    insertnode(head,20);
    insertnode(head,30);
    insertnode(head,40);
    insertnode(head,50);
    print(head);
    print(head);
    cout<<endl;
    reverse(head);
    cout<<reverse(head)<<endl;
    return 0;
}