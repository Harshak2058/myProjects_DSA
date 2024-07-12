//1 leaf node means no child; left and  right childs equal to null
//2 either one element in left or right delete
  /*if we want to delete right child and we dont have left child then delete that node and shift successor  node
  as right child of predessor of deleted node.
  if we want to ddelete left child and we ddont have right child then delete that node and shift the successor 
  node as left child to predessor the deleted node*/
//either left most max element or right most minimum element when it has both left and right child
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
void minValue()
{
    Node *temp=root;
while(temp->lc!=NULL)
{
temp=temp->lc;
}
return temp;
}
Node* deleteBST(Node* root, int val)
{
    if(root==NULL)
    return root;
    if(root->data==val){
        //zero child
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            return NULL;
        }
        
        //single left child
        if(root->left!=NULL && root->right==NULL)
        {
            Node* temp=root->left;
            delete root;
            return temp;
        }
        //single right child
        if(root->left==NULL && root->right!=NULL)
        {
          Node* temp=root->root;
          delete root;
          return temp;
        }
    }
    //2 child
    //either find max element from left subtree or min element of right sub tree and replace the root with it
    if(root->left!=NULL && root->right!=NULL)
    {
        int minVal=minValue(root->right)->data;
        //replacing value
        root->data=minVal;
        root->right=deleteBST(root->right,minVal);
        return root;
    }
    else if(root->data>val)
    {
        root->left=deleteBST(root->left,val);
    }
    else if(root->data<val)
    {
        root->right=deleteBST(root->right,val);
    }
}
void Traverse(Tree*root)
{
    if(root==NULL) return;
    Traverse(root->lc);
    cout<<root->data<<" ";
    Traverse(root->rc);
}

void 
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
