#include<iostream>
using namespace std;
int main(){
    // CREATION
    string name;

    // INPUT
    cin>>name;

    //PRINT
    cout<<" printing name :"<<name<<endl;
    int index = 0;
    while(name[index] != '\0'){
        cout<<"index:"<<index<<"character:"<<name[index]<<endl;
        index++;
    }
}