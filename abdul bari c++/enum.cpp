#include<iostream>
using namespace std;
enum day{mon=10,tue,wed,thu,fri,sat,sun};
int main(){
    day d;
    d=tue;
    cout<<tue<<endl;
    cout<<wed<<endl;
    cout<<thu<<endl;
    cout<<fri<<endl;
    cout<<mon<<endl;
    cout<<sat<<endl;
    cout<<sun<<endl;
    return 0;
}