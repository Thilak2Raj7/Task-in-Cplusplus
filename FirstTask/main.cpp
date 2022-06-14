#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bike.h"
using namespace std;

int main()
{
Car veh1("Audi","R8","Diesel","Red",20,4600000,"SUV",7);
veh1.display();

Car veh2("Audi","A4","Diesel","Black",20,5000000,"SEDAN",4);
veh2.display();

Bike veh3("Pulsar","NS","Petrol","Black",35,100000,"ROADBIKE",152);
veh3.display();



if(veh1 > veh3)
{
cout<<"The vehicle 1 is more costlier than vehicle 2  "<<"true"<<endl;
}
else{
cout<< "The vehicle 2 is more costlier than vehicle 1 "<<"false"<<endl;
}


}


