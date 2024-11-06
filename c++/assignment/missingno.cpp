// find missing no. from the given array of repeated element

// #include<iostream>
// using namespace std; 

// void findno(int arr[],int n ){
//     int i = 0;
//     while(i < n){
//         int index = arr[i]-1;
//         if(arr[i] != arr[index]){
//             swap(arr[i] , arr[index]);
//         }
//         else{
//             i++;
//         }
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i] != i+1){
//             cout<< i+1 <<" "; 
//         }
//     }
// }
// int main(){
//     int arr[] = {5,3,3,1};
//     int size = 5;
//     findno(arr,size);
// }

// another way 

#include<iostream>
using namespace std;

void  missing(int arr[],int n){
    for(int i = 0;i<n;i++){
        int index = abs(arr[i]);
        if(arr[index-1] > 0){
            arr[index-1] *= -1;
        }
        else{
            continue;
        }
    }
    for(int i = 0;i<n;i++){
        if(arr[i] > 0){
            cout<<i+1<<" ";
        }
    }
    
}
int main(){
    int arr[] = {1,3,3,3,4};
    int n = 5;
    missing(arr,n);
}