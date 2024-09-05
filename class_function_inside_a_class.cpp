//Prashant
//23070123102
//function/method inside a class 
#include<iostream>
using namespace std;
class Myself //defining a class 
{
   public: //access type 
   string name="Priti";
   string surname="Bhardwaj";
   int date= 11,month=11,year=2004;
   void displayInfo() //method(function) of a class
   {
    cout<<"My details: "<<endl<<name<<" "<<surname<< endl<< "DOB: "<<date<<"/"<<month<<"/"<<year;
   }
};
   int main()
   {
    Myself my;
    my.displayInfo();//calling function of  class 
    return 0;
   }
