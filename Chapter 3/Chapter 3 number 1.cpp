#include <iostream>
using namespace std;

int main()
{
	float gastank;
	cout<<"please input number for gas tank ";
	cin>>gastank;
	float maxdistance;
	cout<<"please input number for maxdistance when the car have full gastank ";
	cin>>maxdistance;
	
	float permiles=maxdistance/gastank;
	cout<<"the car traveled "<<permiles<<" miles every 1 galoon of gas "<<endl;
}
