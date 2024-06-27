#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][4];
     int sum=0;
    
  //  int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++){
            
    cin>>arr[i][j];
    }
    }
//print
    for(int i=0;i<3;)
    { label:
        for(int j=0;j<4;j++){
           
            sum+=arr[i][j];
            if(j==3){
            cout<<"sum is:"<<sum<<" "<<endl;
            sum =0;
            i++;
            if(i==3) break;
            
            goto label;
            }

    }
    }
   // cout<<"sum is:"<<sum<<" ";
    cout<<endl;
    return 0;
}