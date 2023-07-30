#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* right;
    struct Node* left;

    Node(int value){
        data= value;
        right=NULL;
        left=NULL;
    }

}; 

void preorder(struct Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int calheight(Node* root){  //calculating height of tree
    if (root==NULL)
    {
        return 0;
    }
    int lheight=calheight(root->left);
    int rheight=calheight(root->right);
    return max(lheight,rheight) +1;
}
void inorder(struct Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
   struct Node* root= new Node(1);
   root->left=new Node(2);
   root->right=new Node(3);

   root->left->left=new Node(4);
   root->left->right=new Node(5);
   preorder(root);
   inorder(root);
   cout<<calheight(root)<<" ";
}