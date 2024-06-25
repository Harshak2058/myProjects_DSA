#include <iostream>
#include <climits>
using namespace std;
int subMaxArray(int arr[],int size){
    int max= INT_MIN;
    int sum =0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
        if(sum>max)
        {
            max=sum;
        }
            if(sum<max)
    {sum=0;
    }
}
return max;
}
int main() {
    int arr[]={-2,-3,4,-1,5};
    int size=5;
  int sma= subMaxArray(arr, size) ;
   cout<<"sub max array is: "<<sma<<endl;
    return 0;
}