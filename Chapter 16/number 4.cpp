#include<iostream>
using namespace std;


template <class value>
int absolutevalue(value number)
{
	if(number<0)
	{
		number=number * -1;
	}
	else
	{
		number=number* 1;
	}
	
	return number;
}

int main()
{
	int numbers;
	cout<<"input a number ";
	cin>>numbers;
	cout<<"this is the absolute value "<<absolutevalue(numbers);
	return 0;
}

