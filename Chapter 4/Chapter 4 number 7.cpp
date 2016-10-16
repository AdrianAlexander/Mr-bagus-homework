#include <iostream>
using namespace std;

int main()

{
	int second;
	cout<<"enter the time in second ";
	cin>>second;
	
	if(second<0)
	{
		cout<<"error";
	}
	
	if(second>=60 && second<3600)
	{
	cout<<"it's equal to "<<second/60 <<" minutes";
	}
	
	else if(second>=3600 && second<86400)
	{
		cout<<"it's equal to "<<second/3600<<" hours";
	}
	
	else
	{
		cout<<"its equal to "<<second/86400<<" days";
	}
	return 0;
	
}
