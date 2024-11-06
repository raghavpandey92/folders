// ye diya hai -> 111111111111111
// ye krna hai -> 111111111110000

// #include<iostream>
// using namespace std;

// void clearbit(int n , int i){
//     int ans = (-1 << i);
//     int finalans = ans & n;
//     cout<<"updated no ."<<finalans<<endl;
// }
// int main(){
//     int n = 15;
//     int target = 2;  // bit i.e. last ke 2;
//     clearbit(n,target);
// }




// CHECK POWER OF 2 IF A NO. IS GIVEN 

// #include<iostream>
// using namespace std;
// bool power2(int n){
//     int count = 0;
//     while(n != 0){
//         int lastbit = n & 1;
//         if(lastbit) count++;
//         n = n>>1;
//     }
//     if(count == 1){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main(){
//     int n = 16;
//     cout<<power2(n);
// }

// ANOTHER WAY TO CHECK 

// #include<iostream>
// using namespace std;
// bool power2(int n){
//     if((n & (n-1)) == 0){
//         return true;  // i.e 1;
//     }
//     else return false;      // i.e. 0;
// }
// int main(){
//     int n = 1024;
//     cout<<power2(n);
// }




// To count the set bit in a given no.

// #include<iostream>
// using namespace std;
// int countset(int n){
//     int count = 0;
//     while( n != 0){
//         count++;
//         n = (n & (n-1));
//     }
//     return count;
// }
// int main(){
//     int n = 21;
//     cout<< countset(n);
// }




// to find subsequence of a given string //

#include<iostream>
#include<vector>
using namespace std;

void countsubseq(string str){
    int n = str.length();
    vector<string>ans;
    for(int num =0;num<(1<<n);num++){
        // no. is ready
        //use no. to create subseq

        string temp = "";
        for(int i = 0;i<n;i++){
            char ch  = str[i];
            // agr i index pr num k andr set bit present hai
            // to character ko include krdo
            if(num & (1<<i)){
                temp.push_back(ch);
            }
        }
        ans.push_back(temp);
    }
    for(auto i : ans){
        cout<<i<<'#'<<endl;
    }
}
int main(){
    string str = "abc";
    countsubseq(str);
}


