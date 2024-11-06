// row wise sum of element //
// #include<iostream>
// using namespace std;
// void sumrow(int arr[][4],int row,int col){
//     for(int i=0;i<row;i++){
//         int sum = 0;
//         for(int j=0;j<col;j++){
//             sum = arr[i][j]+sum;
//         }
//         cout<<"the sum of row :"<<i<<" "<<sum<<endl;
//     }
// }
// int main(){
//     int arr[3][4] = {
//         {12,34,56,89},
//         {13,45,67,87},
//         {65,32,44,33}
        
//     };
//     int row = 3;
//     int col = 4;
//     sumrow(arr,row,col);
// }

// colomn wise sum of element //
#include<iostream>
using namespace std;
void sumrow(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        int sum = 0;
        for(int j=0;j<col;j++){
            sum = arr[i][j]+sum;
        }
        cout<<"the sum of row :"<<i<<" "<<sum<<endl;
    }//cout<<sum;
    cout<<endl<<endl;
}

void sumcol(int arr[][4], int row, int col){
    int sum = 0;
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            sum = arr[j][i]+sum;
        }
    }cout<<sum;
    cout<<endl;
    
    
}
int main(){
    int arr[3][4] = {
        {12,34,56,89},
        {13,45,67,87},
        {65,32,44,33}
        
    };
    int row = 3;
    int col = 4;
    sumrow(arr,row,col);
    sumcol(arr,row,col);
}
