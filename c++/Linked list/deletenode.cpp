#include<iostream>
using namespace std;
class node{
    // private:
    // node* head;
    public:
    int data;
    node* next;

    node(){
        this->data = 0;
        this->next = NULL;
    }
    node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~node(){
        
    }
};
void insert(node* &head,int data){
    node* a = new node(data);
    if(head == NULL){
        cout<<"node is empty "<<endl;
        head = a;
    }
    else{
        node* t = head;
        while(t->next!= NULL){
            t = t->next;
        }
        t->next = a;
    }
}

int deletenode(node* &head,int position){
    if(position == 1){
        node* a = head;
        int x = head->data;
        head = head->next;
        delete a;
        return x;
        }
    else{
        node* prev = nullptr;
        node* curr =  head;
        while(position != 1){ 
            position--;
            prev = curr;
            curr = curr->next;
        }
        
        prev->next = curr->next;
        curr->next  = nullptr;
        int x=curr->data;
        delete curr;
        return x;
    }

} 
void printnode(node* head){
    node* t = head;
    while(t != NULL){
        cout<<t->data<<" ";
        t = t->next;
    }
}
int main(){
    node* head = nullptr;
    insert(head,11);
    // insert(head,22);
    // insert(head,33);
    // insert(head,44);
    // insert(head,55);
    printnode(head);
    cout<<endl;
    cout<<"the deleted data is :"<<deletenode(head,1);
    cout<<endl;
    if(head == NULL){
        cout<<"head is null:"<<endl;
    }
    printnode(head);
    
}

 