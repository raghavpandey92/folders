//  WRITE A FUNCTION TO PRINT SUM OF THREE NO.

// #include<iostream>
// using namespace std;

// void sum(int a,int b,int c){
//     int z= a+b+c;
//     cout<<"the sum of three given no. is="<<z<<endl;
// }

// int main(){
//      sum(4,6,8);
// }

//   WRITE A FUNCTION RETURN A SUM OF THREE NO.

#include<iostream>
using namespace std;

int sum(int a,int b,int c){
    int z=a+b+c;
    return z;
}

int main(){
    int d= sum(40,50,20);
    cout<<"the sum of three no is ="<<d<<endl;
}
