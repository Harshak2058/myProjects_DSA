#include <iostream>

using namespace std;
template<class T,int arraySize>
class arrayList
{
public:
    T num[arraySize];
   
    void add(T n[])
    {
        for(int i=0;i<arraySize;i++)
        {
            num[i]=n[i];
        }
    }
    void disp()
    {
        for(int i=0;i<arraySize;i++)
        {
            cout<<num[i]<<endl;
        }
    }

};

int main()
{
  arrayList <int,5> a1;
  int num1[]={12,23,34,33,44};
  a1.add(num1);
  a1.disp();
    return 0;
}