#include<iostream>
using namespace std;
int main()
{
	int price =95;
	double statetax=0.04;
	double countrytax=0.02;
	double totaltax=statetax+countrytax;
	float taxprice=price*totaltax;
	float totalprice=taxprice+price;
	cout<<"the tax Price is "<<taxprice<<" "<<"the total price is "<<totalprice;
	return 0;
}
