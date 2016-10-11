#include <iostream>
using namespace std;
int main()
{
	//profit = 58%
	int profit;
	int salesthisyear=8600000;
	int totalthisyear;
	int totalEastcoastdivision=(salesthisyear*58/100);
	totalthisyear=(salesthisyear*58/100)+salesthisyear;
	cout<<"the amount of money that East coast division get "<<totalEastcoastdivision<<endl;
	cout<<"the amount of money that the company get is "<<totalthisyear;
	return 0;
}
