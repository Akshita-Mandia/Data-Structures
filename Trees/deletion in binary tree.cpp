#include<iostream>
using namespace std;

struct node *  deletenode()
{
    if(root==NULL)
        return NULL;
    if(key<root->key)
        root->left=deletenode(root->left,key);
    else if(key>root->key)
        root->right=deletenode(root->right,key);
    else if(root->right==NULL && root->left==NULL)
    {
        delete root;
        root=NULL;
    }
    else if(root->right==NULL)
    {
        node *temp=root;
        root=root->left;
        delete temp;
    }
    else if(root->left==NULL)
    {
        node * temp=root;
        root=root->right;
        delete temp;
    }
    else
    {
        node * temp=minvalue(root->right);
        root->key=temp->key;
        root->right=deletekey(root->right,temp->key);
    }
};
