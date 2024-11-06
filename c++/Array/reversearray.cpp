//  REVERSE OF AN ARRAY  //

#include<iostream>
using namespace std;
void reverse(int arr[],int size){
    int left=0;
    int right=size-1;
    while(left<=right){
        swap(arr[left],arr[right]);
        left++;
        right--;
  
    }
    cout<<"reverse of array";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[6] = {2,4,6,8,9,3};
    int size = 6;
    reverse(arr,size);
}


//  EXTREME REVERSE OF ARRAY  //
// #include<iostream>
// using namespace std;
// void extreme(int arr[],int size){
//     int left=0;
//     int right=size-1;
//     while(left<=right){
//         cout<<arr[left]<<" ";
//         cout<<arr[right]<<" ";
//         left++;
//         right--;
//     }
//     cout<<"the extreme array is :"<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[6] = {4,5,6,7,2,3};
//     int size = 6;
//     extreme(arr,size);
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6];
//     int n=6;
//     for(int i=0;i<n;i++){
//         cout<<"the index no is = ";
//         cin>>arr[i];
//     }
//     cout<<endl;
//     cout<<"the array is "<<endl;
//     for(int i=0;i<n;i++){
//         arr[i];
//     }
//     cout<<"the reverse array is ";
//     int i = 6;
//     while(i--){
//         cout<<arr[i]<<" ";
//     }
// }
    
