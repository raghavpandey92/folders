//  WAP TO FIND THE UNIQUE ELEMENT IN THE GIVEN ARRAY //
// HERE WE USE 'XOR' OPERATION //
// #include<iostream>
// using namespace std;

//     int unique(int arr[] , int count){
//         int ans = 0;
//         for(int i=0;i<count;i++){
//             ans = ans^arr[i];
//         }
//         return ans;

//     }
//     int main(){
//     int arr[] = {2,4,6,8,9,2,8,6,4};
//     int count = 9;
//     int z = unique(arr,count);
//     cout<<"the unique element in given array is = "<<z<<endl;
// }


// PRINT THE GIVEN ARRAY WITH ALL ITS ELEMENTS //
// #include<iostream>
// using namespace std;
// int print(int arr[],int n){
//     int ans;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             int ans = (arr[i],arr[j]);
//             cout
             
            
            
//         }
//     }
//     return ans;
// }
// int main(){
//     int arr[] = {10,20,30};
//     int n = 3;
//     int z = print(arr,n);
//     cout<<"all the pair of given array are = "<<z<<endl;
// }

// SAME QUESTION //
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {10,20,30};
//     int n =3;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i]<<" "<<arr[j]<<endl;
//         }
//     }
// }

// PRINT THE TRIPLET OF A GIVEN ARRAY //
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {20,30,40};
//     int n = 3;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             for(int k=0;k<n;k++){
//                 cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
//             }
//         }
//     }
// }


    //  SORT ALL 0'S AND 1'S IN A GIVEN ARRAY ELEMENTS //
// #include<iostream>
// using namespace std;
// void sort(int arr[], int n){
//     int count0=0;
//     int count1=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             count0++;
//         }
//         if(arr[i]==1){
//             count1++;
//         }
//     }
//     int index = 0;
//     while(count0--){
//         arr[index] = 0;
//         index++;
//     }
//     while(count1--){
//         arr[index] = 1;
//         index++;
//     }
        
// }
// int main(){
//     int arr[] = {0,0,1,1,0,1,0,0,1,0,0};
//     int n = 11;
//     sort(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
       
// }


//  SHIFT THE ELEMENT IN A GIVEN ARRAY //
#include<iostream>
using namespace std;
void shift(int arr[],int n){
    int temp = arr[n-1];
    for(int i=n-1;i>=1;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp; 
}
int main(){
    int arr[] = {2,3,4,5,6,7};
    int n = 6;
    shift(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
 

    

    
