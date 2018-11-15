#include<iostream>
using namespace std;

struct node
{
    int data;
    node * left;
    node *right;
};
node * insert(node * root,int val)
{
    node * temp=new node;
    temp->data=val;
    temp->left=NULL;
    temp->right=NULL;

    if(root==NULL)
        root=temp;
    else if(val<=(root->data))
    {
        root->left=insert(root->left,val);
    }
    else
    {
        root->right=insert(root->right,val);
    }
}
main()
{
    node * root;
    root=NULL;
    int n,val;
    cout<<"enter n: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        root=insert(root,val);
    }

    node * ptr,*ptr1;
    ptr=root;
    ptr1=root;
    while(ptr!=NULL)
    {
        cout<<" left data: "<<ptr->data<<endl;
        ptr=ptr->left;
    }
    cout<<"\n";
    while(ptr1!=NULL)
    {
        cout<<" right data: "<<ptr1->data<<endl;
        ptr1=ptr1->right;
    }
}
