// #include<iostream>
// #include<string.h>   
// using namespace std;
// void reversestring(char ch[],int size){
//     int i = 0,j=size-1;
//     while(i<=j){
//         swap(ch[i],ch[j]);
//         i++;
//         j--;
//     }
// }
// int main(){
//     char ch[100];
//     cin>>ch;
//     cout<<"the given string is:"<<ch<<endl;
//     int len =strlen(ch);
//     reversestring(ch,len);
//     cout<<"reverse of given string :"<<ch<<endl;
// }


// CONVERT FROM LOWER CASE TO UPPER CASE
// #include<iostream>
// #include<string.h>
// using namespace std;
// void convert(char ch[],int n){
//     int index = 0;
//     while(ch[index] != '\0'){
//         char currentcharacter = ch[index];
//         if(currentcharacter>='a' && currentcharacter<='z'){
//             ch[index] = currentcharacter-'a'+'A';
//         }
//         index++;
//     }
// }
// int main(){
//     char ch[100];
//     cin.getline(ch,100);
//     cout<<"before convert :"<<ch<<endl;
//     convert(ch,100);
//     cout<<"after convert :"<<ch<<endl;

// }


// REMOVE @ WITH A SPACE IN A STRING

#include<iostream>
#include<string.h>
using namespace std;
void remove(char ch[],int n){
    int index = 0;
    while(ch[index]!='\0'){
        if(ch[index] == '@'){
            ch[index] = ' ';
        }
        index++;
    }
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    cout<<"before convert :"<<ch<<endl;
    remove(ch,100);
    cout<<"after convert :"<<ch<<endl;

}

