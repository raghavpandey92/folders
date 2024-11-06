#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"the value of a is=";
    cin>>ch;
    if(ch>=97 && ch<=122){
        cout<<"the given value of a is in lower case";
    }
    else{
        cout<<"the given value of a is in upper case";
    }
    if(ch>=0 && ch<=9){
        cout<<"the given value of is in numeric ";
    }
    
}
