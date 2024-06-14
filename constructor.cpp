#include<iostream>
using namespace std;

class Student
{ 
    public:
    string stName;
    int stId;

    Student()
    {
        stName="harsha";
        stId=101;
    }
    Student(string stName,int stId)
    {
       this->stName=stName;
      this->stId=stId;
    }
    void display(){
        cout<<stName<<" "<<stId<<endl;
    }
~Student()
{cout<<"destructor called"<<endl;
}
};
int main(){
    Student s1,s2("ronnie",102);
   s1.display();//default constructor
   s2.display(); //parameterized constructor
   Student s3(s2);//copy constructor
   s3.display();
    return 0;
}