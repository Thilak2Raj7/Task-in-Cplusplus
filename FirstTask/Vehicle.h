#ifndef VEHICLE_H
#define VEHICLE_H
# include<iostream>
using namespace std;
class Vehicle{

private:
string vehicle_type;
string brand;
string model;
string color;
int mileageOfVehicle;
int price;
int numberOfWheels;

public:
Vehicle(string brd,string mdl,string type,string clr,int mileage ,int amount)
{
 vehicle_type=type;
 brand=brd;
 model=mdl;
 color=clr;
 mileageOfVehicle=mileage;
 price=amount;
}


public :
virtual int  getNumberOfWheels()=0;


string getBrand()
{
return brand;
}

 string getColor()
{
return color;
}

int getPrice()
{
return price;
}
 string getModel()
 {
 return model;
 }
string getVehicleType()
{
return vehicle_type;
}

bool operator >(Vehicle &p)
{
if(getPrice() > p.getPrice())
{
return true;
}


return false;
}


};
#endif

