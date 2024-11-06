#include<iostream>
using namespace std;
void print(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void transpose(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    
    
}
int main(){
    int arr[3][3] = {
        {2,3,4},
        {5,6,7},
        {8,9,1}
    };
    int row = 3;
    int col = 3;
    cout<<"printing before transpose"<<endl;
    print(arr,row,col);
    cout<<endl;
    cout<<"during transpose"<<endl;
    transpose(arr,row,col);
    cout<<"printing after transpose"<<endl;
    print(arr,row,col);

    
    return 0;
}