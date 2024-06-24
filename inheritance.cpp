#include<iostream>
using namespace std;

class Vehicle{
    private:
    string company;
    string model;
    int mYear;
    public:
    void setCompany(string sCompany)
    {
        company=sCompany;
    } 
    string getCompany()
    {
        return company;
    }
    void setModel(string sModel)
    {
        model=sModel;
    }
    string getModel()
    {
        return model; 
    }
    void setmYear(int sMyear)
    {
        mYear= sMyear;
    }
    int getMyear()
    {
        return mYear;
    }

    void VehicleDetails(){
        cout<<company<<"\n"<<model<<"\n"<<mYear<<endl;
    }
};

class Bike : public Vehicle
{
    private:
    int bPrice;

public:
   void setBprice(int sBprice)
   {
    bPrice=sBprice;
   }
   int getBprice()
   {
    return bPrice;
   }
   void bDetails(){
    cout<<"market details"<<endl;
    cout<<bPrice<<endl;
    cout<<"available all stores in metropolitian cities"<<endl;
   }
};

class Car : public Vehicle{

 private:
    int cPrice;

public:
   void setCprice(int sCprice)
   {
    cPrice=sCprice;
   }
   int getcPrice()
   {
    return cPrice;
   }
   void cDetails(){
    cout<<"market details"<<endl;
    cout<<cPrice<<endl;
    cout<<"available all stores in metropolitian cities"<<endl;
   }

};

class Aeroplane : public Vehicle{
public:
void fly()
{
    cout<<"flying "<<endl;
}
};

int main()
{
Vehicle v;
    Bike b;
    b.setCompany("royal enfield");
    b.setModel("classic 350 reddich");
    b.setmYear(2019);
    b.setBprice(20000);
cout<<"summary of Bike details:"<<endl;
cout<<b.getCompany()<<endl;
cout<<b.getModel()<<endl;
cout<<b.getMyear()<<endl;
b.bDetails();

cout<<"-----------"<<endl;


Car c;
c.setCompany("Hyundai");
    c.setModel("Verna");
    c.setmYear(2020);
    c.setCprice(15000000);
    cout<<"summary of car details:"<<endl;
cout<<c.getCompany()<<endl;
cout<<c.getModel()<<endl;
cout<<c.getMyear()<<endl;
c.cDetails();
cout<<"-----------"<<endl;


Aeroplane a;
a.setCompany("Air asia");
    a.setModel("Air aa-101");
    a.setmYear(2000);
cout<<"summary of Aerolane details:"<<endl;
cout<<a.getCompany()<<endl;
cout<<a.getModel()<<endl;
cout<<a.getMyear()<<endl;
a.fly();
        return 0;
}


// if we ewant to ecxploicitly access the method from the other class. we can use ::
// object.ClassName::METHODname();