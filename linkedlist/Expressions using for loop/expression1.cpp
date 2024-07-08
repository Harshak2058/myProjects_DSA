//1^2 +2^2 +3^2  +4^2 +.............
#include<iostream>
using namespace std;
int main()
{
  cout<<"enter the number u want to get sum of squares"<<endl;
  int n;
  cin>>n;
  cout<<"number is : "<<n<<endl;
int sum=0;
int sq=2;
for(int i=1;i<=n;i++)
{
    sum+=i*sq;
}
cout<<"sum is :"<<sum;
    return 0;
}