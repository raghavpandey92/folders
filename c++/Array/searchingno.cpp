// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6] = {7,4,6,8,9,34};
//     int n =6;
//     int min = arr[0];
//     for(int i=1;i<n;i++){
//         if(arr[i]<min){
//             min=arr[i];
//         }
//     }
//     cout<< min;
    
// }
    

// SAME QUESTION USING FUNCTION //

#include<iostream>
using namespace std;
int minno(int arr[],int size){
    int min = arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int arr[7] = {7,6,8,5,9,2,1};
    int size = 7;
    cout<<minno(arr,size);
    int minimum = minno(arr,size);
    cout<<"the min no. is = "<<minimum; 
}