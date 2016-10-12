#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float classa=15;
	float classb=12;
	float classc=9;
	

	
	float a;
	cout<<"input the amount of tickets A were sold ";
	cin>>a;
	
	float b;
	cout<<"input the amount of tickets B were sold ";
	cin>>b;
	
	float c;
	cout<<"input the amount of tickets C were sold ";
	cin>>c;
	
	
	
	cout << setprecision(2) << fixed << showpoint;
	
	float totalticket=a+b+c;
	cout<<"total ticket sold "<<totalticket<<endl;
	float totalsales=a*classa+b*classb+c*classc;
	cout<<"the total sales of all ticket is "<<"$ "<< totalsales;
}
