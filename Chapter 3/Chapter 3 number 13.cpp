#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	const float YEN_PER_DOLLAR=98.93;
	const float EUROS_PER_DOLLAR=0.74;
	
	float dollars;
	
	cout << setprecision(2) << fixed << showpoint;
	
	
	cout<<"enter the dollar you want to convert into yen and euros $ ";
	cin>>dollars;
	
	float euro=dollars*EUROS_PER_DOLLAR;
	cout<<"the amount of euro is € "<<euro<<endl;
	
	float yen=dollars*YEN_PER_DOLLAR;
	cout<<"and the amount of yen is ¥ "<<yen<<endl;
	
	return 0;
	
	
	
	
}
