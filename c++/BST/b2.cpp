// BST FROM GIVEN INORDER //

#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL; 
    }
};


Node* bstfromin(int inorder[] ,int s,int e){
    if(s > e){
        return NULL;
    }
    int mid = (s+e)/2;
    Node* root = new Node(inorder[mid]);

    root->left = bstfromin(inorder,s,mid-1);
    root->right = bstfromin(inorder,mid+1,e);
    return root;

}


void levelorder(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* front = q.front();
        q.pop();

        if(front == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<front->data<<" ";
            if(front->left != NULL){
                q.push(front->left);
            }
            if(front->right != NULL){
                q.push(front->right);
            }
        }
    }
};

int main(){
    int inorder[] = {10,20,30,40,50,60,70};
    int size = 7;
    int start = 0;
    int end = size-1;
    Node* root = bstfromin(inorder,start,end);

    levelorder(root);
}


