// FIND THE DUPLICATE NO. IN THE GIVEN ARRAY
// leetcode 287;

#include<iostream>
using namespace std;
int duplicate(int arr[],int n){
    int ans = -1;
    for(int i = 0;i<n;i++){
        int index = abs(arr[i]);

        //already visited
        if(arr[index] < 0){
            return index;
        }

        // visited mark
        arr[index] *= -1;
    }
    return ans;
}
int main(){
    int arr[] = {2,3,4,1,2};
    int n = 5;
    cout<<duplicate(arr,n);
}