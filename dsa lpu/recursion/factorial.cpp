#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//find factorial
/*int fact (int n)
{
    if(n==0 || n==1)
    return 1;
    else 
      return n*fact(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}*/
//find power
/*int pow(int b ,int p)
{
    if(p==0)
    return 1;
    else
    return(b*pow(b,p-1));
}
int main()
{
    int b,p;

    cin>>b>>p;

    cout<<pow(b,p);
    
}*/
//largest and smallest number 

/*int largest(int n,int arr[])
{
    if(n==1)
    return arr[0];
    else return max(arr[n-1],largest(n-1,arr));
}
int smallest(int n, int arr[])
{
    if(n==1)
    return arr[0];
    else return min(arr[n-1],smallest(n-1,arr));
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"smallest Number"" "<<smallest(n ,arr)<<endl;
    cout<<"largest number"" " <<largest(n , arr);
}*/
//reverse number 
/*int reversenumber(int num, int rev=0)
{
    if (num==0)
    return rev;
    else 
    {
    int lastdigit=num%10;
    rev=rev*10+lastdigit;
    return reversenumber(num/10,rev);  
}
}
int main(){
    int num;
    cout<<"enter number"<<endl;
    cin>>num;
    int rev = reversenumber(num);
    cout<<"reversed Number"<<rev<<endl;
    return 0;
}*/
//length of string
/*int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);  
    int length1 = str.length();
    int length2 = str.size();
    cout << "Length of the string (using length()): " << length1 << endl;
    cout << "Length of the string (using size()): " << length2 << endl;

    return 0;
}*/
/*int main(){
    string str;
    cout<< "enter thr string:";
    getline(cin,str);
    int length1 = str.length();
    int lenght2 = str.size();
    cout<<"Length of the string" <<length1<<endl;
    cout<<"using size of the string length" <<lenght2;

}*/
template <typename T>
struct Node {
    T data;
    Node* next;
    Node* prev;
};

template < typename T>
std::size_t sizeOfDoublyLinkedList(const Node<T>* head) {
    std::size_t size = 0;
    const Node<T>* current = head;

    while (current != nullptr) {
        size += sizeof(T);
        current = current->next;
    }

    return size;
}
