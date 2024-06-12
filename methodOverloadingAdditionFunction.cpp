#include<iostream>
using namespace std;
class Classs
{
    public:
int sum;
void add(int a,int b)
{
    sum=a+b;
    cout<<sum<<endl;
}
void add(float m,float n){
float ssum=m+n;
cout<<ssum<<endl;
}
void add(int x,int y,int z){
sum = x+y+z;
cout<< sum<<endl;
}
};

int main ()
{
    Classs c;
    c.add(2,3);
    c.add(1.1f,2.2f);
    c.add(1,2,3);
    return 0;
}
