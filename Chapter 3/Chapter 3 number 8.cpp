#include<iostream>
using namespace std;

int main()
{
	int widgetstack;
	const float widget=12.5;
	float pallet;
	float widgetweight;
	float totalweight;
	
	cout<<"input the amount stack of widget ";
	cin>>widgetstack;
	
	cout<<"input the pallet weight ";
	cin>>pallet;
	
	widgetweight=widget*widgetstack;
	cout<<"the weight of "<< widgetstack<< " widget stack is "<<widgetweight<<" pound "<<endl;
	
	totalweight=widgetweight+pallet;
	cout<<"the total weight of widget and pallet is "<<totalweight<<" pound "<<endl;
	
	
	
	
	return 0;
}
