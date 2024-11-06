// FIND MAX OF THREE NO.

// #include<iostream>
// using namespace std;

// void Max(int num1,int num2,int num3){
//     if(num1>num2 && num1>num3){
//         cout<<"THE GREATEST NO. IS ="<<num1<<endl;
//     }
//     else if(num2>num1 && num2>num3){
//         cout<<"THE GREATEST NO. IS ="<<num2<<endl;

//     }
//     else{
//         cout<<"THE GREATET NO. IS ="<<num3;
//     }
// }  

// int main(){
//     Max(10,89,99);
     
// }

//    USING IN BUILT FUNCTION 

#include<iostream>
using namespace std;

int max(int n1, int n2, int n3){
    int a = max(n1,n2);
    int b = max(a,n3);
    return (b);
}
int main(){
    int maximum = max(3,50,45);
    cout<<"THE MAXIMUM NO. IS ="<<maximum<<endl;
}

#include<iostream>
using namespace std;
int max(int n1,int n2,int n3){
    int a = max(n1,n2);
    int ans = max(n3,a);
    return ans;
}
int main(){
    int maximum = max(40,78,89);
    cout<<"the maximum no. is"<<maximum<<endl;
}