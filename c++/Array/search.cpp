//  LINEAR SEARCH  //
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 6 ;
//     int arr[6] = {2,4,65,87,22,3};
//     int target = 33;
//     bool flag = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i]== target){
//             flag =1;
//             break;
//         }
//     }
//     if(flag==1){
//         cout<<"target is found"<<endl;
//     }
//     else{
//         cout<<"target is not found";
//     }
// }


//   ...ARRAY AND FNCTION...  //

#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//  HERE WE DO LINEAR SEARCH....
bool linearsearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return true; 
        }
    }
    return false;
}


int main(){
    int arr[5] = {2,4,6,7,8};
    int size = 5;
    int target = 9;
    printArray(arr ,size);
    bool ans = linearsearch(arr,size,target);
    //bool ans = linearsearch;
    if(ans==1){
        cout<<"target found"<<endl;
    }
    else{
        cout<<"target not found";
    } 
}