#include <iostream>
using namespace std;

int main()
{
	int month;
	cout<<"enter a month ";
	cin>>month;
	
	if(month>0 && month<=12)
	{
		cout<<"error";
	}
	
	else 
	{
		cout<<"the month is "<<month<<endl;
	}
	
	return 0;
}
