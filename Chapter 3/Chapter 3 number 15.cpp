#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << setprecision(2) << fixed << showpoint;
	
	
	const float ACCESMENT_VALUE=0.6;
	const float PROPERTY_TAX=0.75; //75cent per 100 dollars (1 dollars = 100 cent)
	
	float propertyprice;
	cout<<"enter the price of property $ ";
	cin>>propertyprice;
	
	float accesmentvalue=propertyprice*ACCESMENT_VALUE;
	cout<<"it's accesment value is $ "<<accesmentvalue<<endl;
	
	float accesmentvalueper100dollars=accesmentvalue/100;
	cout<<"accesment value divide by 100 dollars $ "<<accesmentvalueper100dollars<<endl;
	
	
	float propertytax=PROPERTY_TAX*accesmentvalueper100dollars;
	cout<<"the amount of tax is $ "<<propertytax;
	
	
	return 0;
}
