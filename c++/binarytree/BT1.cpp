// IMPLEMENTATION OF TREE //


// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;

//     // constructor
//     Node(int val){ 
//         this->data  =val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// // it return root node of created tree

// Node*createtree(){
//     cout<<"enter the value :"<<endl;
//     int data;
//     cin>>data;
//     if(data == -1){
//         return NULL;
//     } 
//     // step 1 create node
//     Node* root = new Node(data);

//     // create left subtree
//     cout<<"left of node:"<<root->data<<endl;
//     root->left = createtree();
//     // create right subtree
//     cout<<"right of node:"<<root->data<<endl;
//     root->right = createtree();
//     return root;
// }
// int main(){

//     Node* root = createtree();

// }









#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    // constructor
    Node(int val){
        this->data  =val;
        this->left = NULL;
        this->right = NULL;
    }
};

// it return root node of created tree

Node*createtree(){
    cout<<"enter the value :"<<endl;
    int data;
    cin>>data;
    if(data == -1){
        return NULL;
    } 
    // step 1 create node
    Node* root = new Node(data);

    // create left subtree
    cout<<"left of node:"<<root->data<<endl;
    root->left = createtree();
    // create right subtree
    cout<<"right of node:"<<root->data<<endl;
    root->right = createtree();
    return root;
}

// void Preordertrav(Node* root){
//     // LNR
//     // base case
//     if(root == NULL){
//         return ;
//     }
//     //N
//     cout<<root->data<<" ";
//     //L
//     Preordertrav(root->left);
//     //R
//     Preordertrav(root->right);
// }

// void Inordertrav(Node* root){
//     // LNR
//     // base case
//     if(root == NULL){
//         return ;
//     }
//     //L
//     Inordertrav(root->left);
//     //N
//     cout<<root->data<<" ";
//     //R
//     Inordertrav(root->right);
// }

// void postOrdertrav(Node* root){
//     // LRN
//     // base case
//     if(root == NULL){
//         return ;
//     }
//     //L
//     postOrdertrav(root->left);
//     //R
//     postOrdertrav(root->right);
//     //N
//     cout<<root->data<<" ";
// }

void Levelorder(Node* root){
    queue<Node*> q;
    q.push(root);

    // now traversal is start
    while(!q.empty()){
        Node* front = q.front();
        q.pop();

        cout<<front->data<<" ";

        if(front->right != NULL){
            q.push(front->right);
        }
        
        if(front->left != NULL){
            q.push(front->left);
        }
        
    }
}

// void Levelorder(Node* root){
//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);

//     // now traversal is start
//     while(!q.empty()){
//         Node* front = q.front();
//         q.pop();

//         if(front == NULL){
//             cout<<endl;
//             if(!q.empty()){
//                 q.push(NULL);
//             }
//         }
//         else{
//             // valid node wala case
//             cout<<front->data<<" ";
//             if(front->left != NULL){
//                 q.push(front->left);
//             }
//             if(front->right != NULL){
//                 q.push(front->right);
//             }
//         }
//     }
// }
int main(){

    Node* root = createtree();
    cout<<root->data<<endl;
    // cout<<"printing preorder: ";
    // Preordertrav(root);
    // cout<<endl;

    // cout<<"printing Inorder: ";
    // Inordertrav(root);
    // cout<<endl;

//     cout<<"printing Postorder: ";
//     postOrdertrav(root);
//     cout<<endl;

    cout<<"printing Levelorder: ";
    Levelorder(root);
    cout<<endl;

}




