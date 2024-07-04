#include <iostream>

using namespace std;

struct node{
int data;
struct node *next;
}*start=NULL,*nn,*temp,*endp;

void insertBeg(int v)
{
    nn=new node;
  nn->data=v;
  if(start==NULL)
  {
      start=nn;
      nn->next=NULL;
  }
  else{
    nn->next=start;
    start=nn;
     }
}

void insertEnd(int v)
{
    nn=new node;
    nn->data=v;
    nn->next=NULL;
    if(start==NULL)
    {
        start==nn;
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
void traverse()
{
    temp=start;
    while(temp!=NULL)
    {
      cout<<temp<<" "<<temp->data<<" "<<temp->next<<endl;
      temp=temp->next;
    }
}

void insertMiddle(int pos,int v)
{
    nn=new node;
    nn->data=v;
    cout<<"enter which element(n) after u want to insert"<<endl;
 temp=start;
 while(temp!=NULL)
    {
    if(temp->data==pos)
    {
      nn->next=temp->next;
      temp->next=nn;
    }
    temp=temp->next;
   }
}

 int main()
{
    int ch,n;
    char choice;
    do{


    cout<<"enter 1 to insertBeginning"<<endl;
    cout<<"enter 2 to insertEnding"<<endl;
    cout<<"enter 3 to insert Middle"<<endl;
    cout<<"enter 4 to traverse"<<endl;

    cout<<"enter the choice"<<endl;
    cin>>ch;
    switch(ch)
    {
  case 1:
      cout<<"enter element to insert"<<endl;
      cin>>n;
    insertBegin(n);
    break;
  case 2:
      cout<<"enter element to insert"<<endl;
      cin>>n;
    insertEnd(n);
    break;
  case 3:
      int pos,n;
      cout<<"enter position(pos)"<<endl;
    cin>>pos;
    cout<<"enter element(n) to insert"<<endl;
    cin>>n;
    insertMiddle(pos,n);
    break;
  case 4:
    traverse();
    break;

  default:
    cout<<"enter correct input or correct value";
    }

    cout<<"want to continue( Y or N)"<<endl;
    cin>>choice;
    }
    while(choice=='Y' || choice=='y');
    return 0;
}