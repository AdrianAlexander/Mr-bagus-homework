#include <iostream>
using namespace std;

int main()
{
	const float bagcalories=300;
	const float caloriespercookies=10;
	
	int cookies;
	cout<<"how many cookies you want to eat ";
	cin>>cookies;
	
	int totalcalories=cookies*caloriespercookies;
	cout<<"the amount calories you get is "<<totalcalories<<" calories";
	
	return 0;
	
	
	
	
}
