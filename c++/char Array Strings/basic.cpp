// BASIC PROGRAM

#include<iostream>
using namespace std;

int main(){
    // // CREATION
    char ch[100];

    //INPUT
    cin>>ch;
    cout<<"printing the value of ch :"<<ch<<endl;
    // cin.getline(ch,100);    // when we use space btwn string
    // cout<<"printing the value of ch :"<<ch;

    // but if we want to print each index then we use loop
    // for(int i=0;i<10;i++){
    //     cout<<"at index :"<<i<<" "<< ch[i]<<endl;
    // }
}


// #include<iostream>
// #include<string.h>
// using namespace std;
// int findlength(char ch[],int size){
//     int index =0;
//     while(ch[index] !='\0'){
//         index++;
//     }
//     return index;
// //=======  OR USING FOR LOOP
//     // int length = 0;
//     // for(int i=0;i<size;i++){
//     //     if(ch[i] != '\0'){
//     //         length++;
//     //     }
//     //     else break;
//     // }
//     // return length;
// }
// int main(){
//     char ch[100];
//     cin>>ch;
//     int len = findlength(ch,100);
//     cout<<"length of string is :"<<len<<endl;
//     cout<<"length is :"<<strlen(ch)<<endl;
// }