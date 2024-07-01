/**
 * 
 * 
 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int roww=3;
    int coll=4;
    int row,col;
    int arr[roww][coll];
     int sum=0,max=0;
    
  //  int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++){
            
    cin>>arr[row][col];
    }
    }
     for(int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++){
            
    cout<<arr[row][col]<<"\t";
    }
cout<<""<<endl;
    }
    cout<<"--"<<endl;
    
    for(col=0;col<4;col++)
{
    if(col%2==1)
{
    for(row=row-1;row>=0;row--)
    {cout<<arr[col][row]<<"\t";}
}
else{
    for(row=0;row<3;row++)
    {
        cout<<arr[col][row]<<"\t";
    }
}
cout<<""<<endl;
}
    return 0;
}