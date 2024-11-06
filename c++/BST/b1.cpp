// #include<iostream>
// #include<queue>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val){
//         this->data = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// Node* insertBST(Node* root , int data){
//     if(root == NULL){
//         root = new Node(data);
//         return root;
//     }
//     if(data > root->data){
//        root->right = insertBST(root->right,data);
//     }
//     else{
//         root->left = insertBST(root->left , data);
//     }
//     return root;
// };

// void createBST(Node* &root){
//     cout<< "Enter data :"<<endl;
//     int data;
//     cin >> data;
     
//     while(data != -1){
//         root = insertBST(root,data);
//         cout<< "Enter data :"<<endl;
//         cin >> data;
//     }

// };

// void levelorder(Node* root){
//     queue<Node*>q;
//     q.push(root);
//     q.push(NULL);
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


// Node* minval(Node* root){
//     if(root == NULL){
//         cout<<"no min value"<<endl;
//         return NULL;
//     }
//     Node* temp = root;
//     while(temp->left != NULL){
//         temp = temp->left;
//     }
//     return temp;
// }

// Node* maxval(Node* root){    
//     if(root == NULL){
//         cout<<"there is no node :"<<endl;
//         return NULL;
//     }
//     Node* temp = root;
//     while(temp->right != NULL){
//         temp = temp->right;
//     }
//     return temp;
// }

// int main(){
//     Node* root = NULL;
//     createBST(root);

//     levelorder(root);
//     cout<<endl;

//     Node* minnode = minval(root);
//     if(minnode == NULL){
//         cout<<"there is no node"<<endl;
//     }
//     else{
//         cout<<"min value :"<<minnode->data<<endl;   
//     }
//     cout<<endl;
//     Node* maxnode = maxval(root);
//     if(maxnode == NULL){
//         cout<<"there is no node"<<endl;
//     }
//     else{
//         cout<<"max value :"<<maxnode->data<<endl;   
//     }


// }











// NOW SEE TO SEARCH IN BST


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

Node* insertBST(Node* root , int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }
    if(data > root->data){
       root->right = insertBST(root->right,data);
    }
    else{
        root->left = insertBST(root->left , data);
    }
    return root;
};

void createBST(Node* &root){
    cout<< "Enter data :"<<endl;
    int data;
    cin >> data;
     
    while(data != -1){
        root = insertBST(root,data);
        cout<< "Enter data :"<<endl;
        cin >> data;
    }

};

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
}


bool search(Node* &root , int target){
    if(root == NULL){
        return false;
    }
    if(root->data == target){
        return true;
    }
    bool leftans = false;
    bool rightans = false;
    if(root->data > target){
       leftans =  search(root->left,target);
    }
    else{
        rightans = search(root->right,target);
    }
    return (leftans || rightans);
}

int main(){
    Node* root = NULL;
    createBST(root);

    levelorder(root);
    cout<<endl;

    int target;
    cout<<"enter the target :"<<endl;
    cin>>target;

    bool ans = search(root,target);
    if(ans == true){
        cout<<"target found :"<<endl;
    }
    else{
        cout<<"target not found :"<<endl;
    }
}



