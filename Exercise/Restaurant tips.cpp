#include<iostream>
using namespace std;
int main ()
{
	float  Price=88.67;
	float tax=0.0675;
	float tip=0.2;
	float  taxamount=Price*tax;
	float  totalwithtax=taxamount+Price;
	float  Tipamount=tip*Price;
	float  totalbill=totalwithtax+Tipamount;
	
	cout<<"the meal cost is "<<"$ "<<Price<<endl;
	cout<<"the amount of tax is "<<"$ "<<taxamount<<endl;
	cout<<"the total with tax is "<<"$ "<<totalwithtax<<endl;
	cout<<"the total of tip is "<<"$ "<<Tipamount<<endl;
	cout<<"the total bill is "<<"$ "<<totalbill;
	
}


