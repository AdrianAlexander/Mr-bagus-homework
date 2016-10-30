#include<iostream>
#include "Car.cpp"
using namespace std;


int main()
{
Car carr(2015);

for( int counter = 0; counter < 5; counter++)
	{
		carr.setacceleration(5);
	}
	
	
/*	for(counter = 0; counter < 5; counter++)
	{
		carr.setbrake(3);
	}*/

	
	cout <<"The current speed of the car is: "<<carr.getspeed()<<" m/s"<<endl;
	cout<<carr.getyearModel();

	return 0;

}
