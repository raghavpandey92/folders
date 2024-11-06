// #include<iostream>
// using namespace std;


// void maddy(){
//     for(int i=1;i<6;i++){
//         cout<<"MAI BHAUT ACCHA HU"<<endl;
//     }
// }

// int main(){
//     maddy();

// }

#include<iostream>
using namespace std;

void sumofno(int n){
    cout<<"THE SUM OF N NO. IS"<<endl;
    int sum=0;
    for(int i=2;i<=n;i=i+2){
        sum=sum+i;    
    }
    cout<<sum<<endl;

}
int main(){
     sumofno(10);
}
