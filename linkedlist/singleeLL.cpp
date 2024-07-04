#include<iostream>
using namespace std;

struct node{
int data;
struct node *next;
} *start=NULL,*nn, *temp,*loc;

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
void delBeg()
{
    if(start==NULL)
    {
        cout<<"nothing to delete"<<endl;
    }
    else{
    temp=start;
    start=start->next;
    delete temp;
    }
}
void delEnd()
{
if(start==NULL)
    {
        cout<<"nothing to delete"<<endl;
    }
    else{
    temp= start;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    delete temp;

    }
}
void delMiddle(int pos)
{
    if(start==NULL)
    {
        cout<<"nothing to delete"<<endl;
    }
    else{
    temp= start;
   
    while(temp!=NULL)
    {
        
         if(temp->next->data==pos)
         {
            temp->next = loc;
            temp->next=loc->next;
         }
        temp=temp->next;
    }
   

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
 insertBeg(20);
 insertBeg(30);
 insertBeg(40);
 insertMiddle(10,20);
insertEnd(50);
display();
delBeg();
delMiddle(40);
delEnd();
display();
    return 0;
    
}


//loc->next = temp->next;
