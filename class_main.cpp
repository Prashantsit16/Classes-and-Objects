//Prashant
//23070123012
// class main
#include<iostream>
using namespace std;
class Car
{
    public:
    string make,model;
    int year;
    void userInput() //taking car details from the user 
    {
        //string make,model;
        //int year;
        cout<<"Enter car make: ";
        cin>>make;
        cout<<"Enter car model: ";
        cin>>model;
        cout<<"Enter car manufacturing year: ";
        cin>>year;
    }
    void displayInfo()//displaying car details 
    {
        cout<<"Car details: "<<make<<" "<<model<< " " <<year;
    }
};
int main()
{
    Car myCar; //object 
    myCar.userInput();
    myCar.displayInfo();
    return 0;
}
