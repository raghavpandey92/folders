//  WAP TO PRINT AN ARRAY OF 10 ELEMENT AND MAKE IT DPUBLE  //

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10];
//     int n=10;
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     cout<<"THE ORIGINAL ARRAY IS ="<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
    
//     cout<<"THE RESULTANT OF ARRAY IS = "<<endl;
//     for(int i=0;i<n;i++){
//         arr[i]=arr[i]*2;
//         cout<<arr[i]<<" ";
//     }
// }

 // WAP TO SUM OF 5 ELEMENT OF A GIVEN ARRAY //

// #include<iostream>
// using namespace std;
// int main(){
//     int sum=0;
//     int arr[5];
//     int n=5;
//     for(int i=0;i<n;i++){
//         cin>>arr[i] ;
        
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         sum = sum+arr[i];
//     }
//     cout<<"the sum of array of 5 input is ="<<sum<<endl;

// }

// WAP TO COUNT 0'S AND 1'S IN A GIVEN ARRAY //

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6] = {1,0,0,0,0,0};
//     int n=6;
//     int count1=0,count2=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==1){
//             count1= count1+1;
//         }
//         else if(arr[i]==0){
//             count2=count2+1;
//         }
//     }
//     cout<<"total no.of 1's in an array = "<<count1<<endl;
//     cout<<"total no. of 0's in an array = "<<count2<<endl;
    
// }

//  SAME QUESTION BY USING FUNCTION  //
// #include<iostream>
// using namespace std;
// void count(int arr[],int size){
//     int count1 = 0;
//     int count0 = 0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==1){
//             count1++;
//         }
//         else if(arr[i]==0){
//             count0++;
//         }
//     }
//     cout<<"the no. of 1's = "<<count1<<endl;
//     cout<<"the no. of 0's = "<<count0<<endl;
// }
// int main(){
//     int arr[]={1,0,0,0,0,0,0,1};
//     int size =8;
//     count(arr,size);
// }


