#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const float LEASTINSURANCE=0.8;
	float buildingcost;
	float insurancepaid;
	cout<<"enter the cost of the building $ ";
	cin>>buildingcost;
	
	cout << setprecision(2) << fixed << showpoint;
	
	insurancepaid=buildingcost*LEASTINSURANCE;
	cout<<"the insurance that must be paid is $ "<<insurancepaid;
	
	return 0;
}
