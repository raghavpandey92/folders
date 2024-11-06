#include<iostream>
using namespace std;
int main(){
    int swiggy,a,b;
    a = 5;
    b = 6;
    cout<<"which operatio you want to do?";
    cin>>swiggy;
    float ans =0;
    switch(swiggy){
        case 1:
          ans = a+b;
          // break;
        case 2:
          ans = a-b;
          break;
        case 3:
          ans = a*b;
        case 4:
          ans = a%b;        
    }
    cout<<"your answer is :"<<ans<<endl;

}
     // FIRST RUN CASE 1 THEN CASE 2 YOU WILL FIND THE DIFFERENCE.

