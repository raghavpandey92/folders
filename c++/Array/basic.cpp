 //HOW TO FIND A ADDRESS AND SIZE;

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     cout<<"size of a :"<<sizeof(a)<<endl;
//     cout<<"address of a :"<<&a<<endl;

//     int arr[100];
//     cout<<"size of array :"<<sizeof(arr)<<endl;
//     cout<<"address of arr :"<<arr<<endl;
// }

// INDEXING OF AN ARRAY;

#include<iostream>
using namespace std;
int main(){
    int arr[5]= {3,5,7,8,6};
    cout<<"size of array"<< sizeof(arr) / sizeof(arr[0])<<endl;
    cout<<arr[7]<<endl;
    cout<<arr[4]<<endl;
    cout<<arr[2]<<endl;
}

//  PRINTING OF AN ARRAY //

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[12]={4,5,6,7,6,2,8,96,55,43,32,32};
//     int n=12;
//     for(int i=0;i<n;i=i+1){
//         cout<<arr[i]<<endl;
//         }
// } 

// TAKING AN INPUT IN ARRAY //

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[8];
//     int n=8;
//     for(int i=0;i<n;i++){
//         cout<<"enter the value for index : "<<i<<" "<<endl;
//         cin>>arr[i];
//         }
//     //  PRINTING OF AN ARRAY  //
//     cout<<"printing of an array"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }



