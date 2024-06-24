// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int firstOccurence(int arr[],int n, int key)
{
    int start=0;
    int ans=-1;
int end=n-1;
int mid=(start+end)/2;
while(start<=end)
{
    if(arr[mid]==key)
 {
     ans=mid;
    end=mid-1;
}
    else if(key<arr[mid])
    {
        end=mid-1;
    }
    else if(key>arr[mid])
    {
        start=mid+1;
    }
    mid=(start+end)/2;

}
    return ans;
}
int main() {
int arr[5]={1,2,3,4,5};
int n=5;
int key=4;
int f=firstOccurence(arr,n,key);
    cout<<f<<endl;
    return 0;
}