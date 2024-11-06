#include<iostream>
using namespace std;
void max(int arr[3][4],int row,int col,int maxi){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>maxi){
                maxi=arr[i][j];
            }
        }
    }
    cout<<"the maximum no. is :"<<maxi;
}
void mini(int arr[][4],int row,int col, int min){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }
    cout<<"minim no is."<<min;
}
int main(){
    int arr[3][4] = {
        {2,3,4,5},
        {6,7,8,9},
        {45,67,87,85}
    };
    int row = 3;
    int col = 4;
    int maxi = 2;
    int min = 85;
    max(arr,row,col,maxi);
    mini(arr,row,col,min);
}