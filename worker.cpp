#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int ZnumberOfEmployee();
int ZAbsent (int);
double ZAverageOfAbsent (int,int);

int main ()
{
int numberOfEmployee;
int Absent;	
int AverageOfAbsent;

numberOfEmployee=ZnumberOfEmployee();
Absent=ZAbsent(numberOfEmployee);
AverageOfAbsent=ZAverageOfAbsent (numberOfEmployee,Absent);
cout<<"the average of days absent "<< AverageOfAbsent<< endl;
return 0;
}

int ZnumberOfEmployee()
{
	int employee;
	cout<<"number of employee in the company ";
	cin>>employee;
	return employee;
}

int ZAbsent (int employee)
{
	int daysabsent;
	for(int i=0;i<employee;++i)
	{
		int absent;
		cout<<"enter the days of employee "<< i+1 <<" missed "<<endl;
		cin>>absent;
		daysabsent +=absent;
	}
	return daysabsent;
}

double ZAverageOfAbsent (int employee,int absent)
{
	double finaltotal;
	finaltotal=(absent/employee);
	return finaltotal;
}


 






	

