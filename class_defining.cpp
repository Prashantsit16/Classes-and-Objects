//Prashant
//23070123102
//defining a class 
#include<iostream>
using namespace std;
class Car //defining a class called car 
{
    public: //access type
    string make="Kia";
    string model="Seltos";
    int year=2024;
};
int main()
{
    Car myCar; //creates an object of Car called myCar 
    cout<<"Car details: "<<myCar.make<<" "<<myCar.model<<"("<<myCar.year<<")"<<endl;
    return 0;
}
