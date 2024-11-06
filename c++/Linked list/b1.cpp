// PRINTING OF THE LINKEDLIST //

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(){
//         this->data = 0; 
//         this->next = NULL;
//     }
//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void printLL(Node* &head){
//     Node* temp = head;
//     while(temp!= NULL){
//         cout<<temp->data<<"->";
//         temp = temp->next;
//     }
//     cout<<endl;
// }

// int getlength(Node* head){
//     Node* temp = head;
//     int count = 0 ;
//     while(temp!= NULL){
//         count++;
//         temp = temp->next;
//     }
//     return count;
// }

// int main(){
//     Node* first = new Node(10);
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* fourth = new Node(40);
//     Node* fifth = new Node(50);

//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;

//     Node* head = first;
//     cout<<"printing the linkedlist :"<<endl;
//     printLL(head);
//     cout<<endl;
//     cout<<"the size of linkedlist is = "<<getlength(head)<<endl;

    
// }


//ANOTHER WAY OF PRINTING A LINKEDLIST //


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
void inserfirsttnode(Node* &head){
    Node* a = new Node();
    cout<<"node to be insert :"<<endl;
    cin>>a->data;
    a->next = head;
    head = a; 
}

void insertnode(Node* &head, int data){
    // Node* a = new Node(data);
    // a->next = head;
    // head = a; 
    Node* newNode = new Node(data);
    if(head==0){
        head=newNode;
        cout<<"linkedlist"<<endl;
    }
    else{
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    }
 }
void print(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
        
    }
}

int main(){
    Node* head = nullptr ;
    insertnode(head,10);
    insertnode(head,20);
    insertnode(head,30);
    insertnode(head,40);
    insertnode(head,50);
    print(head);
    cout<<endl;
    inserfirsttnode(head);
    print(head);
    return 0;
}
















