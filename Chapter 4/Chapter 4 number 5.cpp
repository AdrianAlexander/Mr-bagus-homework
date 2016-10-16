#include <iostream>
using namespace std;

int main()
{
	float weight;
	cout<<"enter your weight "; //type it in pounds
	cin>>weight;
	
	float height;
	cout<<"enter your height "; //type it in inches
	cin>>height;
	
	float BMI=(weight*703)/(height*height ); 
	cout<<"this is your BMI "<<BMI<<endl;
	
	if(BMI>18.5 && BMI<25)
	{
		cout<<"you got optimal weight ";
	}
	
	else if(BMI<18.5)
	{
		cout<<"you're underweight ";
	}
	
	else
	{
		cout<<"you're overweight";
	}

}
