#include<iostream>
using namespace std;
struct node
{
    node * left;
    node * right;
    int data;
};
    node * root;
void add(node * root1,node * temp)
{
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        if((root1->data) >= (temp->data))
        {
            if(root1->left==NULL)
            {
                root1->left=temp;
            }
            else
            {
                add(root1->left,temp);
            }
        }
        else
        {
            if(root1->right==NULL)
            {
                root1->right=temp;
            }
            else
            {
                add(root1->right,temp);
            }
        }
    }
}
int main()
{
    int num;

    root=NULL;
    cout<<"enter num: ";
    cin>>num;
    while(num!=-1)
    {
        node * temp=new node;
        temp->data=num;
        temp->left=NULL;
        temp->right=NULL;
        add(root,temp);
       cout<<"enter num: ";
        cin>>num;
      //  cout<<root->data;
    }
    node * ptr,*ptr1;
    ptr=root;
    ptr1=root;
    //cout<<ptr<<" "<<root;
    while(ptr!=NULL)
    {
        //cout<<"hi";
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
