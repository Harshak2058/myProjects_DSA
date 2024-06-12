#include<iostream>
using namespace std;
void fun(int n)
{
    n++;
    cout<<n<<endl;
}
int main(){
    int n =5;
    fun(n);//here n is sending as a copy but it will will not override the n value which is original value of n
    cout<<n<<endl;
    return 0;
}