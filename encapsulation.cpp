#include<iostream>
using namespace std;

class Student
{ 
    private:
    string Name;
    int rollNo,age;
    char grade;
public:
    void setName(string newName){
         Name = newName;
    }
  string getName(){
        return Name;
    }
     void setRollNo(int newRollNo){
        rollNo=newRollNo;
    }
    int getRollNo(){
        return rollNo;
    }
     void setAge(int newAge){
         age=newAge;
    }
    int getAge(){
       return age;
    }
     void setGrade(char newGrade){
         grade= newGrade;
    }
    char getGrade(){
        return grade;
    }
     void display(){
        cout<<Name<<" \n"<<rollNo<<" \n"<<age<<" \n"<<grade<<endl;
     }
};
int main(){
   Student s;
  // s.display();
   s.setName("harsha");
   s.setRollNo(1);
   s.setAge(10);
   s.setGrade('b');

   cout<<s.getName()<<" "<<endl;
   cout<<s.getRollNo()<<" "<<endl;
   cout<<s.getAge()<<" "<<endl;
   cout<<s.getGrade()<<endl;
   cout<<"-------------------------"<<endl;
   s.display();
    return 0;
    
}
//define student class with following private data members
/*
name(string)
int -> rollNo, age
char grade
get method: 
implement public gertter methods to retrieve the values of data members:
string getName(): returns name of student
int getRollNumber(): returns the rill number of the student
int getAge(): returns the age of student
int getGrade(): returns the grade if the student
set method:
implement public setters method to set the values of data members 
void setName(string newName): returns name of student
void setRollNo(int newRollNo): returns the rill number of the student
void setAge(int newAge): returns the age of student
void setGrade(char newGrade): returns the grade if the student
*/