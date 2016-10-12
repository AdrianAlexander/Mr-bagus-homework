#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	
	const float SUGAR=1.5;
	const float BUTTER=1;
	const float FLOUR=2.5;
	int amountofcookies;
	
	int cookies=48;
	
	cout << setprecision(2) << fixed << showpoint;
	
	float sugar=SUGAR/cookies;
	float butter=BUTTER/cookies;
	float flour=FLOUR/cookies;
	
	cout<<"how many cookies you want to make ";
	cin>>amountofcookies;
	
   	
	
	cout<<"to make "<<amountofcookies<<" cookies you need "<<sugar*amountofcookies<<" gr sugar ";
	cout<<", "<<butter*amountofcookies<<"gr butter ";
	cout<<", and "<<flour*amountofcookies<<" gr flour ";
	
	return 0;
}
