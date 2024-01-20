#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};
void insertatBeginning(struct Node**head, int newdata)
{
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=newdata;
    newnode->next=(*head);
    (*head)=newnode;
}
void printList(struct Node* node)
{
    while(node!=NULL)
    {
        cout<<node->data<<"";
        node=node->next;
    }
}
void insertatend(struct Node*node)
{
    while(node!=NULL)
    {
        cout<<node->data<<" ";
        node=node->next;

    }
}
void insertatafter(struct Node*node)
{
    while(node!=NULL)
    {
        cout<<node->data<<" ";
        node=node->next;

    }
}
int main()
{
   struct Node* head= NULL;
    insertatend(&head,1);
    insertatBeginning(&head,2);
    insertatBeginning(&head,3);
    insertatend(&head,4);
    insertatafter(head->next,5)
    printList(&head);

}
