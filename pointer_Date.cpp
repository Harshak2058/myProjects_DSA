
#include<iostream>
using namespace std;

class Date
{
    private:
        short int dd, mm, yy;

    public:
        Date()
            {
		 dd=0;
		 mm=0;
		 yy=0;
            }

        void getdata(int i, int j, int k)
            {
                dd = i;
                mm = j;
                yy = k;
            }


        void printdate()
            {
                cout<<"\nDate is "<<dd<<"/"<<mm<<"/"<<yy<<"\n";
            }
};

int main()
{
    Date D1;
    Date *dptr;

   cout<<"printing members using the object ";
   D1.getdata(20,10,2020);       
   D1.printdate();

    dptr = &D1;
    cout<<"Printing members using the object pointer ";
   
    dptr->getdata(20,10,2020);
    dptr->printdate();
   
    return 0;
}