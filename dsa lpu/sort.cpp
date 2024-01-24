#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *takeinput()
{
    int data;
    cin >> data;
    struct Node *head = NULL;
    struct Node *tail = NULL;

    while (data != -1)
    {
        struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));

        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        newnode->data = data;
        newnode->next = NULL;
        cin >> data;
    }
    return head;
}

void print(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl; // Add this line to print a newline after the list
}

struct Node  *insert(struct Node  *head, int i, int data) // insert at ith position
{
      struct Node  *temp = head;
  
    if (i < 0) return head;
    
    if (i == 1)
    {
        struct Node  *newnode = (struct Node *)malloc(sizeof(struct Node));
        newnode->data=data;
        newnode->next = head;
         head = newnode;
         temp = head;

        return head;
    }

    else
    {   
         int k=1;
         while(k<i-1 && temp !=NULL)
        {
            temp = temp->next;
            k++;
            // if(temp ==NULL) break;
        }
          struct Node  *newnode = (struct Node *)malloc(sizeof(struct Node));  
              newnode->data=data;
              newnode->next = temp->next;
             temp->next = newnode;
    }
    return head;
}

/* struct Node* rotate(struct Node* head)
{
     
} */

void deleteith(struct Node*head, int i)
{
    struct Node *temp = head;
    if (i <= 0)
        cout << "Inalid index" << endl;
    if (i == 1 && head)
    {
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    else
    {
        int k = 1;
        while (k < i - 1 && temp != NULL)
        {
            temp = temp->next;
            k++;
        }
        struct Node *current = temp->next;
        temp->next = temp->next->next;
        current->next = NULL;
        delete current;
    }
}

void sortlinkedlist(struct Node* head)
{
    if(head==NULL)
    {
        return;
    }
    else{

        struct Node* curr=head;
        struct Node* index=NULL;
        while(curr!=NULL)
        {
            index=curr->next;
            while(index!=NULL)
            {
                if(curr->data>index->data)
                {
                    int temp=curr->data;
                    curr->data=index->data;
                    index->data=temp;
                }
                    index=index->next;
            }
            curr=curr->next;
        }
    }
    
}

int main()
{
    struct Node *head = takeinput();
    print(head);
  // struct Node *newhead = insert(head,7,5);
  // print(newhead);
   //struct Node* rothead=rotate(head);
   //print(rothead);
   //deleteith(head,2);
   sortlinkedlist(head);
   print(head);


    return 0;
}