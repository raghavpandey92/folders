// DELETE NODE FROM BST //


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
};

Node* maxval(Node* root){    
    if(root == NULL){
        return NULL;
    }
    Node* temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
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

Node* deletenode(Node* root ,int target){
    if(root == NULL){
        return NULL;
    }
    if(root->data == target){
        //case 1
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        // case 2
        else if(root->left != NULL && root->right == NULL){
            Node* childtree = root->left;
            delete root;
            return childtree;
        }
        // case 3
        else if(root->left == NULL && root->right != NULL){
            Node* childtree = root->right;
            delete root;
            return childtree;
        }
        // case 4
        else{
            Node* maxi = maxval(root->left);
            root->data = maxi->data;

            root->left = deletenode(root->left , maxi->data);
            return root;

        } 

    }
    else if(root->data > target){
        root->left =  deletenode(root->left ,target);
    }
    else{
        root->right = deletenode(root->right,target);
    }
    return root;
}

int main(){
    Node* root = NULL;
    createBST(root);

    levelorder(root);
    cout<<endl;

    int target;
    cout<<"enter the target :"<<endl;
    cin >> target;

    while(target != -1){
        root = deletenode(root,target);
        cout<<endl<<"print levelorder :"<<endl;
        levelorder(root);

        cout<<"enter the value :"<<endl;
        cin>> target;
    }
}

