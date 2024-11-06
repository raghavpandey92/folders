// #include<iostream>
// #include<queue>
// #include<map>
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

// Node* createtree(){
//     cout<<"enter the value for Node :";
//     int value;
//     cin>>value;

//     if(value == -1){
//         return NULL;
//     }
//     Node* root = new Node(value);
//     root->left = createtree();
//     root->right = createtree();
//     return root;
// }

// void preorder(Node* root){
//     if(root == NULL){
//         return;
//     }
//     cout<< root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }

// void inorder(Node* root){
//     if(root == NULL){
//         return;
//     }
    
//     inorder(root->left);
//     cout<< root->data<<" ";
//     inorder(root->right);
// }

// void postorder(Node* root){
//     if(root == NULL){
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<< root->data<<" ";
// }

// void levelorder(Node* root){
//     queue<Node*>q;
//     q.push(root);
//     q.push(NULL);
//     cout<<endl;

//     while(!q.empty()){
//         Node* temp = q.front();
//         q.pop();

//         if(temp == NULL){
//             cout<< endl;
//             if(!q.empty()){
//                 q.push(NULL);
//             }
//         } 
//         else{
//             cout<<temp->data<<" ";
//             if(temp->left != NULL){
//                 q.push(temp->left);
//             }
//             if(temp->right != NULL){
//                 q.push(temp->right);
//             }
//         }
//     }
// }

// void leftview(Node* root,int level,vector<int>&ans){
//     if(root == NULL){
//         return;
//     }
//     if(level == ans.size()){  
//         ans.push_back(root->data);
//     }
//     leftview(root->left,level+1,ans);
//     leftview(root->right,level+1,ans); 
// }

// void rightview(Node* root,int level,vector<int>&ans){
//     if(root == NULL){
//         return;
//     }
//     if(level == ans.size()){
//         ans.push_back(root->data);
//     }
//     rightview(root->right,level+1,ans);
//     rightview(root->left,level+1,ans);
    
// }

// // void topview(Node* root){
// //     map<int,int>mp;  // it store 2 things level and ans
// //     queue<pair<Node*,int>>q;
// //     q.push(make_pair(root,0));

// //     while(!q.empty()){
// //         pair<Node*,int>temp = q.front();
// //         q.pop();

// //         Node* frontNode = temp.first;
// //         int hd = temp.second;  // here hd mean level

// //         // if there is no entry for hd in map, then create a new entry
// //         if(mp.find(hd) == mp.end()){
// //             mp[hd] = frontNode->data;
// //         }
// //         // after that we have to see the child
// //         if(frontNode->left != NULL){
// //             q.push(make_pair(frontNode->left , hd-1));
// //         }
// //         if(frontNode->right != NULL){
// //             q.push(make_pair(frontNode->right , hd+1));
// //         }


// //     }
// //     cout<<"printing the top view :"<<endl;
// //     for(auto j : mp){
// //         cout<<j.second<<" ";
// //     }

// // }

// void bottomview(Node* root){
//     map<int,int>mp;
//     queue<pair<Node*,int>>q;
//     q.push(make_pair(root,0));

//     while(!q.empty()){
//         pair<Node*,int>temp = q.front();
//         q.pop();

//         Node* frontnode = temp.first;
//         int hd = temp.second;

//         // here we have to go at bottom so we have to continously update 
//         //our map
//         mp[hd] = frontnode->data;

//         // again see the child
//         if(frontnode->left != NULL){
//             q.push(make_pair(frontnode->left , hd-1));
//         } 
//         if(frontnode->right != NULL){
//             q.push(make_pair(frontnode->right , hd+1));
//         } 

//     }
//     for(auto k : mp){
//         cout<<k.second<<" ";
//     }
// }


// int main(){
//     Node* root = createtree();
//     levelorder(root);
//     cout<<endl;

//     //vector<int>ans;
//     // leftview(root,0,ans);
//     // cout<<"printing the left view:"<<endl;
//     // for(int i = 0;i<ans.size();i++){
//     //     cout<<ans[i]<<" ";
//     // }

//     //vector<int>ans;
//     // rightview(root,0,ans);
//     // cout<<"printing the right view:"<<endl;
//     // for(int i = 0;i<ans.size();i++){
//     //     cout<<ans[i]<<" ";
//     // }

//     // topview(root); 

//     bottomview(root);
//     return 0;

// }
















// BOUNDARY TRAVERSAL //

#include<iostream>
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

Node* createtree(){
    cout<<"enter the valuse for node :"<<endl;
    int data;
    cin>>data;
    if(data == -1){
        return NULL;
    }
    Node* root = new Node(data);
    root->left = createtree();
    root->right = createtree();
    return root;
};


void printleft(Node* root){
    if(root == NULL){
        return;
    }
    if(root->left == NULL && root->right == NULL){
        return;
    }
    cout<< root->data<<" ";
    if(root->left != NULL){
        printleft(root->left);
    }
    else{
        printleft(root->right);
    }
};

void printright(Node* root){
    if(root == NULL){
        return;
    }
    if(root->left == NULL && root->right == NULL){
        return;
    }
    if(root->right != NULL){
        printright(root->right);
    }
    else{
        printright(root->left);
    }
    cout<<root->data<<" ";
};

void printleaf(Node* root){
    if(root == NULL)
        return;
    if(root->left == NULL && root->right == NULL){
        cout<<root->data<<" ";
    }
    printleaf(root->left);
    printleaf(root->right);
};

void printboundary(Node* root){
    if(root == NULL){
        return;
    }
    cout<< root->data<<" ";
    printleft(root->left);
    printleaf(root->left);
    printleaf(root->right);
    printright(root->right);
    
    
}


int main(){
    Node* root = createtree();
    printboundary(root);
}
