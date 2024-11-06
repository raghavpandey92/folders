#include<iostream>
using namespace std;
int createNumber(int number){

    int num = 0;
    for(int i=0;i<number;i++){
        cout<<"enter digit:"<<endl;
        int digit;
        cin>>digit;
        num = num*10 + digit;
        cout<<"no. created:"<<num<<endl; 
    }
    return num;
    
}
int main(){
    int number;
    cin>>number;
    int num = createNumber(number);
    cout<<"nn. created by digit:"<<num<<endl;

}