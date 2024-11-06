#include<iostream>
using namespace std;
int main(){
    int n= 5;
    cout<<(++n)<<endl;
    cout<<(n++)<<endl;
    cout<<(--n)<<endl;
    cout<<(n--);
}

// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;
//     cout<<(++a)*10<<endl;
//     cout<<(a++)*10<<endl;
//     cout<<a;
// }

//   variable scoping

// #include<iostream>
// using namespace std;
// int main(){
//     int a=101;
//     if(true){
//         cout<<"inside if no. 1"<<endl;
//         int a = 202;
//         if(true){
//             cout<<"inside if no.2"<<endl;
//             //int a = 303;
//             cout<<a<<endl;
//         }
//     }
// }