// INPUTS IN ARRAY //
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3];
//     int row = 3;
//     int col = 3;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<"enter the value for row: "<< i <<"colmn index :"<< j <<endl;
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }  




// SEARCHING IN ARRAY //
#include<iostream>
using namespace std;
bool find(int arr[][4],int row,int col,int target){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[3][4] ={
        {23,44,54,89},{
            2,5,67,89},
            {33,90,13,4}
    };
    int row = 3;
    int col = 4;
    int target = 5;
    cout<<"found or not :"<<find(arr,row,col,target);
    
    
    
}