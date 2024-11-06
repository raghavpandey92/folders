#include<iostream>
using namespace std;

bool primeno(int n){
    cout<<"THE GIVEN NO. IS ="<<n<<endl;
    for(int i=2;i<n;i=i+1){
        if(n%i==0){
           return false;
        }
    }    
    return true;
    
}
int main(){
   bool prime= primeno(28);
   if(prime){
    cout<<"the given no is prime no."<<endl;

   }
   else{
    cout<<"the given no. is not a prime no.";
   }
}