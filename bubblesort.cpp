#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
 for(int i=0;i<n-1;i++)
 {
    for(int j=0;j<n-i-1;j++)
    {
        if(arr[j]>arr[j+1]){
             int temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
        }
    }
 }
}
void bubbleArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
}

void insertion(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        int j=i;
        while(j>0 && arr[j-1]>arr[j])
        swap(arr[j-1],arr[j]);
        j--;
    }
}
int main()
{
    int n=5;
    int arr[n]={1,4,3,6,5};
    bubbleSort(arr,n);
  bubbleArray(arr,n);

    return 0;
}