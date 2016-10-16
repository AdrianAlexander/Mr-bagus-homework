#include <iostream>
#include <string>
using namespace std;
int main()
{
	string colour1,colour2, red = "red", blue = "blue", yellow = "yellow";
	cout<<"pick the first colour ";
	cin>>colour1;
	cout<<"pick the second colour ";
	cin>>colour2;
	
	if(colour1==red && colour2==blue || colour1==blue && colour2==red)
	{
		cout<<"the result will be purple";
	}
	else if (colour1==red && colour2==yellow || colour1==yellow && colour2==red)
	{
		cout<<"the result will be Orange";
	}
	else if (colour1==yellow && colour2==blue || colour1==blue && colour2==yellow)
	{
		cout<<"the result will be green";
	}
	else
	{
		cout<<"error";
	}
	return 0;
}
