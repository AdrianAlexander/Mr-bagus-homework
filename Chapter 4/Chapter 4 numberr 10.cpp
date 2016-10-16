#include <iostream>
using namespace std;

int main()
{
	int month;
	cout<<"enter a month ";
	cin>>month;
	
	if(month>0 && month<=12)
	{
		cout<<"the month is "<<month<<endl;
	}
	
	else 
	{
		return 0;
	}
	
	
	int year;
	cout<<"enter a year ";
	cin>>year;
	
	if(year%4==0)
	{
		cout<<"it's a leap year ";
	}
	else
	{
		cout<<"it's not a leap year";
	}
	
	return 0;
}
