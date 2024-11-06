// two pointer approach  //

#include<iostream>
using namespace std;

void shiftnegativeoneside(int arr[],int n){
    //  METHOD - 1;
    // int j = 0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]<0){
    //         swap(arr[i],arr[j]);
    //         j++;
    //     }
    // }

    //  METHOD -2;
    int i = 0;
    int j = n-1;
    while(i<j){
        if(arr[i] < 0){
            i++;
        }
        else if(arr[j] > 0){
            j--;
        }
        else{
            swap(arr[i],arr[j]);
        }
    }
}
int main(){
    int arr[] = {23,-7,12,-10,11,40,-5};
    int n = 7;

    shiftnegativeoneside(arr,n);

    cout<<"the resultant array is :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}