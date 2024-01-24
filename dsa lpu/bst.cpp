#include<iostream>
using namespace std;
struct Node{
    int key;
    struct Node*left,*right;
};
//int* ptr=(int*)
struct Node *newNode(int item){
    struct Node *temp= (struct Node*)malloc(sizeof(struct Node));
    temp->key=item;
    temp->left=temp->right=NULL;
    return temp;
}
void inorder(struct Node *root){
    if (root!=NULL){
        inorder(root->left);
    
    cout<<root->key<<"-";
    inorder(root->right);
    }
}
struct Node *insert(struct Node*node, int key){
    if (node==NULL)
    return newNode(key);
    if(key<node->key)
    node->left=insert(node->left,key);
    else
    node->right=insert(node->right,key);
    return node;
}
struct Node *minValueNode(struct Node*node){
    struct Node *current=node;
    while(current && current->left!=NULL)
    current=current->left;
    return current;
}
struct Node *deleteNode(struct Node *root, int key)
{
if (root==NULL) return root;
if (key<root->key)root->left=deleteNode(root->left,key);
else if (key>root->key)
root->right=deleteNode(root->right,key);
else{
  if(root->left==NULL){
    struct Node*temp=root->right;
    free(root);
    return temp;
  }
  else if(root->right==NULL){
    struct Node*temp=root->left;
    free(root);
    return temp;
  }
  struct Node*temp=minValueNode(root->right);
  root->key=temp->key;

  root->right=deleteNode(root->right,temp->key);
}
  return root;
}
int main(){
    struct Node *root=NULL;
    root=insert(root,8);
    root=insert(root,3);
    root=insert(root,1);
    root=insert(root,6);
    root=insert(root,7);
    root=insert(root,10);
    root=insert(root,14);
    root=insert(root,4);
    cout<<"inorder traversal";
    inorder(root);
    cout<<"\nafter delet 8\n";
    root=deleteNode(root,8);
    cout<<"inorder traversal";
    inorder(root);
}