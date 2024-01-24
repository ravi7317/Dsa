#include<bits/stdc++.h>
using namespace std;
struct Node 
{
    int data;
    struct Node *next;
};
struct Node* top=NULL;
void push(int val){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data=val;
    newnode->next=top;
    top= newnode;
}
void pop(){
    if(top==NULL)
    cout<<"Stack Undrflow"<<endl;
    else{
        cout<<"the pop element is"<<top->data<<endl;
        top=top->next;
    }
}
void display(){
    struct Node*ptr;
    if (top==NULL)
    cout<<"stack is empty"<<endl;
    else{
        ptr=top;
        cout<<"Stack element are: ";
        while (ptr!=NULL){
         cout<<ptr->data<<" ";
         ptr=ptr->next;
        }
    }
    cout<<endl;
}
int main(){
    int ch,val;
    cout<<"1) push in stack"<<endl;
    cout<<"2) pop from stack"<<endl;
    cout<<"3) display stack"<<endl;
    cout<<"4) exit"<<endl;
    do{
        cout<<"Enter choise: "<<endl;
        cin>>ch;
        switch(ch){
            case 1:{
                cout<<"enter the pushed value"<<endl;
                cin>>val;
                break;
              }
               case 2:{
                pop();
                break;
              }
               case 3:{
             display();
             break;
                 }
                 case 4:{
                  cout <<"Exit"<<endl;
                  break;}
                  default:{
                    cout<<"Invalid Choise"<<endl;
                  }
        }
    }while (ch!=4);
    return 0;
}
