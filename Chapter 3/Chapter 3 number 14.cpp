#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	const float STATE_TAX=0.4;
	const float COUNTRY_TAX=0.2;
	const float TOTAL_TAX=0.6;
	string month;
	
	cout << setprecision(2) << fixed << showpoint;
	
	cout<<"enter the month and year ";
	getline(cin ,month);
	
	float sales=25068.76;
	cout<<"sales : "<<sales<<endl;
	
	
	float salestax=sales*TOTAL_TAX;
	
	float totalamountcollected=sales*1.06;
	cout<<"total collected : "<<totalamountcollected<<endl;
	
	float countrytax=sales*COUNTRY_TAX;
	cout<<"country sales tax : "<<countrytax<<endl;
	
	float statetax=sales*STATE_TAX;
	cout<<"state sales tax : "<<statetax<<endl;
	
	float totaltax=sales*TOTAL_TAX;
	cout<<"total sales tax : "<<totaltax<<endl;
	
	return 0;
	
	
	
	
	
	
}
