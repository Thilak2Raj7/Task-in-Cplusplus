
# include<iostream>
# include "Vehicle.h"
using namespace std;
class Car:public Vehicle
{

private:
 int numberOfPersons;
 string carType;

 public:
 Car(string brd,string model,string type,string clr,int mileage,int amount,string car,int number):Vehicle( brd,model,type, clr,mileage, amount)
 {
  carType=car;
  numberOfPersons=number;
 }
string getCarType()
{
return carType;
}


int getNumberOfPersons()
{
return numberOfPersons;
}


int getNumberOfWheels()
{
return 4;
}
void display()
{
cout<<"The brand name of vehicle is  "<<getBrand()<<endl;
cout<<"The model of vehicle is "<<getModel()<<endl;
cout<<"The type of vehicle is  "<<getVehicleType()<<endl;
cout<<"The colour of vehicle is  "<<getColor()<<endl;
cout<<"The price of vehicle is  "<<getPrice()<<endl;
cout <<"The number of wheels in car is   "<<getNumberOfWheels()<<endl;
cout<<endl;
}



};



