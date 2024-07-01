#include<iostream>
using namespace std;

struct node{
int data;
struct node *next;
} *start=NULL,*nn, *temp;

void insertBeg(int v)
{
   nn=new node;
   nn->data =v;
   if(start==NULL)
   {
     start=nn;
     nn-> next=NULL;
   }
   else
   {
     nn->next= NULL;
     start=nn;
   }

}
void insertMiddle(int pos, int v)
{
 nn=new node;
   nn->data =v;
   if(start==NULL)
   {
     start=nn;
     nn-> next=NULL;
   }
   else
   {
    temp=start;
    while(temp!=NULL)
    {
        if(temp->data ==pos)
        {
            nn->next=temp->next;
            temp->next=nn;
    }
    temp=temp->next;
   }   
}
}
void insertEnd(int v)
{
   nn=new node;
   nn->data =v;
   nn->next=NULL;
   if(start==NULL)
   {
     start=nn;
     nn-> next=NULL;
   }
   else
   {
    temp=start;
     while(temp->next!=NULL)
     {
        temp=temp->next;
     }
     temp->next=nn;
   }

}
void display()
{
    temp=start;
    while(temp!=NULL)
{
    cout<<temp<<" "<<temp->data<<" "<<temp->next<<" "<<endl;
    temp=temp->next;
}
}

int main()
{
 insertBeg(10);
 insertMiddle(10,20);
insertEnd(30);
display();
    return 0;
    
}