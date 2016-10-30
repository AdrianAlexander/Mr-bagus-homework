#include <iostream>

using namespace std;

class Date{

	int day;
	int month;
	int year;
	string months[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};

	public:
		Date(int day,int month,int year);
		void printFirstForm();
		void printsecond();
		void printthird();
	};

Date::Date(int day,int month,int year)
{
	this->day=day;
	this->month=month;
	this->year=year;
}

void Date::printFirstForm(){
	cout<<month<<"/"<<day<<"/"<<year<<endl;
}

void Date::printsecond(){
	cout<<months[0]<<" "<<day<<","<<year<<endl;
}
		
void Date::printthird(){
	cout<<day<<" "<<months[0]<<" "<<year<<endl;
}


