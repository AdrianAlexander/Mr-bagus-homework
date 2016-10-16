#include <iostream>
using namespace std;

int main()
{
	float mass;
	cout<<"enter the mass of the object ";
	cin>>mass;
	
	float weight=mass*9.8;
	cout<<"this is the weight of the object "<<weight;
	
	if(weight>1000)
	{
		cout<<" the object is too heavy ";
	}
	
	else if(weight<10)
	{
		
		cout<<" the object is too light";
	}
	
	return 0;
}
