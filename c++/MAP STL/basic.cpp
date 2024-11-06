#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    //CREATION
    unordered_map<string,int>mapping;

    //INSERTION
    pair<string,int>p = make_pair("hello",25);// 1st way
    pair<string,int>q("vinayak",24); //2nd way
    pair<string,int>r;   // 3rdd way
    q.first = "pratyush";
    q.second = 21;

    //INSERTION
    mapping.insert(p);
    mapping.insert(q);
    mapping.insert(r);

    //inseert
    mapping["babbar"] = 51;
    cout<<"size of map :"<<mapping.size()<<endl;

    //ACCESS
    cout<<mapping.at("hello")<<endl;   //1st way
    cout<<mapping["hello"]<<endl;     // 2nd way

    //SEARCHING
    cout<<mapping.count("hello")<<endl; // 1st way

    if(mapping.find("pratyush") != mapping.end()){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
}