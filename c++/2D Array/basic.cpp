// row wise access//
#include<iostream>
using namespace std;
void rowprint(int arr[][4],int row,int col){
    cout<<"row wise access"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}


void colprint(int arr[][4],int row,int col){
    cout<<"colmn wise access"<<endl;
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {2,4,8,0},
    };
    int row = 3;
    int col = 4;
    rowprint(arr,row,col);
    colprint(arr,row,col);
} 