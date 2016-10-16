#include <iostream>
using namespace std;

int main()
{
	const int package=99;
	const float disc1=0.2;
	const float disc2=0.3;
	const float disc3=0.4;
	const float disc4=0.5;
	
	
	int packagesold;
	cout<<"how many packages were sold ";
	cin>>packagesold;
	
	float totalprice=package*packagesold;
	cout<<"the total price is "<<totalprice<<endl;
	
	if(packagesold>=10 && packagesold<=19)
	{
		cout<<"the total price after discount "<<totalprice-(totalprice*disc1)<<endl;
	}
	
	else if(packagesold>=20 && packagesold<=49)
	{
		cout<<"the total price after discount "<<totalprice-(totalprice*disc2)<<endl;
	}
	
	else if(packagesold>=50 && packagesold<=99)
	{
		cout<<"the total price after discount "<<totalprice-(totalprice*disc3)<<endl;
	}
	
	else if(packagesold>=100)
	{
		cout<<"the total price after discount "<<totalprice-(totalprice*disc4)<<endl;
	}
	return 0;
}
