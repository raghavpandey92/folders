// #include<iostream>
// using namespace std;

// void evenodd(int n){
//     if(n & 1 ){
//         cout<<n<<" is odd no "<<endl;
//     }
//     else{
//         cout<<n<<" is even no . "<<endl;
//     }
// }

// int main(){
//     int n ;
//     cin>>n;
//     evenodd(n);
// }





//  GET THE Ith BIT //

// #include<iostream>
// using namespace std;

// void getbit(int n,int i){
//     int ans = n >> i;    // in this we do right shift in the given no.
//     int finalans = ans & 1;
//     if(finalans == 0){
//         cout<<"bit -> 0"<<endl;
//     }
//     else{
//         cout<<" bit -> 1"<<endl;
//     }
// }

// int main(){
//     int n ;
//     cin>>n;
//     int i = 2;       // bit no.
//     getbit(n,i);
// }

// another way by doing left shift in the 1 then do 'and' with the no.

// #include<iostream>
// using namespace std;

// void getbit(int n,int i){
//     int ans = 1 << i;    // in this we do right shift in the given no.
//     int finalans = ans & n;
//     if(finalans == 0){
//         cout<<"bit -> 0"<<endl;
//     }
//     else{
//         cout<<" bit -> 1"<<endl;
//     }
// }

// int main(){
//     int n ;
//     cin>>n;
//     int i = 7;     // bit no.
//     getbit(n,i);
// }






// SET Ith BIT i.e. in place of req bit we put '1'

// #include<iostream>
// using namespace std;

// void setbit(int n,int i){
//     int ans = 1 << i;    // in this we do left shift with 1 and do 'or' with n
//     int finalans = ans | n;
//     cout<< " updated no "<< finalans <<endl;
// }

// int main(){
//     int n ;
//     cin>>n;
//     int i = 3;  // bit no.
//     setbit(n,i);
// }



// CLEAR iTH bit i.e. in place of req bit we put '0'

#include<iostream>
using namespace std;

void clearbit(int n , int i){
    int ans = 1 << i;
    int finalans = ans^n;
    cout<<" updated no."<<finalans<<endl;
}

int main(){
    int n = 10;
    int i = 1;  // bit no.
    clearbit(n,i);
}

// another way by negation value;

// #include<iostream>
// using namespace std;

// void clearbit(int n , int i){
//     int ans = ~(i << 1); // here we do negation
//     int finalans = ans & n;
//     cout<<" updated no."<<finalans<<endl;
// }

// int main(){
//     int n = 10;
//     int i = 1;  // bit no.
//     clearbit(n,i);
// }








// UPDATE THE Ith bit //

// #include<iostream>
// using namespace std;

// void clearbit(int &n , int i){
//     int ans = ~(1 << i); // here we do negation
//     n = ans & n;
// }

// void updatebit(int n,int i,int target){
//     clearbit(n,i);
    
//     int ans = (target << i);
//     int finalans = n | ans;
//     cout<<" update no."<<finalans<<endl;
// }
// int main(){
//     int n = 10;
//     int i = 2;  // bit no.
//     int target = 1;
//     updatebit(n,i,target);
// }





