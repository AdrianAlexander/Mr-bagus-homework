#include<iostream>
using namespace std;

int main()
{
	int day;
	cout<<"enter the day ";
	cin>>day;
	
	int month;
	cout<<"enter the month ";
	cin>>month;
	
	int year;
	cout<<"enter the year ";
	cin>>year;
	
	cout<<day<<"/"<<month<<"/"<<year ;
	
	if(day*month==year)
	{
		cout<<" it's a magic date";
	}
	else
	{
		cout<<" m	it's not a magic date ";
	}
	return 0;
}
