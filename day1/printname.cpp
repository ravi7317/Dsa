#include<iostream>
using namespace std;

int main(){
    string name;
    cout<<"what is your name"<<endl;
    getline(cin,name);
    //getline use for take full name or taking full lenght of string 
    cout<<"welcome mr./miss"<<endl<<name;
    return 0;
}