#include<iostream>
#include<string.h>
using namespace std;
bool palindrome(char ch[],int size){
    int i=0;
    int j= size-1;
    while(i<=j){
        if(ch[i] == ch[j]){
            i++,j--;
        }
        else{
        return false;
        }
    }
    return true;
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    cout<<"the string is :"<<ch <<endl;
    int len = strlen(ch);
    int ans = palindrome(ch,len);
    if(ans == true){
        cout<<"the given string is palindrome :"<<endl;
    }
    else{
        cout<<"not a palindrome :"<<endl;
    }
}