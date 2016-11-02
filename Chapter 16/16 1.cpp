#include<iostream>

using namespace std;

double divide(int numerator ,int denominator)
{
	double hasil=static_cast<double>(numerator)/denominator;
	if(denominator ==0)
	{
		string e="cannot be divided by 0! ";
		throw e;
	}
	return hasil;
	
	
	
}

int main()
{
	int a;
	int b;
	
	try
	{
		//divide (2,0);
		cout<<"input a ";
		cin>>a;
		cout<<"input b ";
		cin>>b;
		cout<<divide(a,b)<<endl;
	}
	catch(string e)
	{
		cout<<e;
	}
	
	cout<<"end ";
	
}

