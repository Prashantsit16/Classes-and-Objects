//Prashant
//23070123102
//function/method inside a class 
#include<iostream>
using namespace std;
class Myself //defining a class 
{
   public: //access type 
   string name="Prashant";
   string surname="Bajpai";
   int date= 16,month=12,year=2003;
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
