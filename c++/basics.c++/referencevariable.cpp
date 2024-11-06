//  HERE WE SEE THE REFERENCE VARIABLE  //

// #include<iostream>
// using namespace std;
// int main(){
//     int n = 10;
//     int &c = n;
//     int &k = n;
//     cout<<"n is :"<<n<<endl;
//     cout<<"c is :"<<c<<endl;
//     cout<<"k is :"<<k<<endl;

//     k++;
//     cout<<"n is :"<<n<<endl;
//     cout<<"c is :"<<c<<endl;
//     cout<<"k is :"<<k<<endl;

//     n++;
//     cout<<"n is :"<<n<<endl;
//     cout<<"c is :"<<c<<endl;
//     cout<<"k is :"<<k<<endl;
// }

//  CALL BY VALUE //

// #include<iostream>
// using namespace std;
// int incrementby1(int n){
//     n = n+1;
//     return n;
// }
// int main(){
//     int n;
//     cin>> n;
//     n = incrementby1(n);
//     cout<<n<<endl;
// }


// CALL BY REFERENCE //
#include<iostream>
using namespace std;
void incrementby1(int &o){
    o=o+1;
    return;
}
int main(){
    int n;
    cin>> n;
    incrementby1(n);
    cout<<n<<endl;
    return 0;
}