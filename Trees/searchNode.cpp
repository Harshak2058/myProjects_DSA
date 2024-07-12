#include<iostream>
using namespace std;

struct Tree{
    int data;
    Tree*lc;
    Tree*rc;
}*root=NULL;

Tree*createT(int val)
{
    Tree*nn=new Tree;
    nn->data=val;
    nn->lc=NULL;
    nn->rc= NULL;
    return nn;
}

Tree*Insert(Tree*root,int val)
{
    if(root==NULL)
    {
        return createT(val);
    }else if(val<root->data)
    {
        root->lc=Insert(root->lc,val);
    }else if(val>root->data)
    {
        root->rc=Insert(root->rc,val);
    }else{
        return root;
    }
}

void search(val)
{
    if(root==key)
    return root;
    if(root==NULL)
    return NULL;
    //checking if the node is left or right
    if(root->data>key)
    return search(root->lc,key);
    else
        return search(root->rc,key);
}
void min()
{
    Node *temp=root;
while(temp->lc!=NULL)
{
temp=temp->lc;
}
return temp;
}
void Traverse(Tree*root)
{
    if(root==NULL) return;
    Traverse(root->lc);
    cout<<root->data<<" ";
    Traverse(root->rc);
}

int main()
{
    root=Insert(root,5);
    root=Insert(root,6);
    root=Insert(root,1);
    root=Insert(root,4);
    root=Insert(root,3);
    root=Insert(root,8);
    root=Insert(root,10);

    cout<<"Traversing BST."<<endl;
    Traverse(root);
    int val=5;
    search(val);
    min(val);
    cout<<endl;
    return 0;
}
