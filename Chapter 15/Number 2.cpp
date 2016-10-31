#include<iostream>
using namespace std;


class Employee{
	private:
		string EmployeeName;
		int EmployeeNumber;
		int HireDate;
		
	public:
		Employee()
		{
			EmployeeName=" ";
			EmployeeNumber=0;
			HireDate=0;
		}
		
		Employee(string EmployeeName,int EmployeeNumber,int HireDate)
		{
			this->EmployeeName=EmployeeName;
			this->EmployeeNumber=EmployeeNumber;
			this->HireDate=HireDate;
		}
		
		void setEmployeeName(string Name)
		{
			EmployeeName=Name;
		}
		
		void setEmployeeNumber(int Number)
		{
			EmployeeNumber=Number;
		}
		
		void setHireDate(int Date)
		{
			HireDate=Date;
		}
		
		string getEmployeeName() const
		{
			return EmployeeName;
		}
		
		int getEmployeeNumber() const
		{
			return EmployeeNumber;
		}
		
		int getHireDate() const
		{
			return HireDate;
		}

};

class ShiftSupervisor:public Employee{
	private:
		int AnnualSalary;
		double ProductionBonus;
		
	public:
		ShiftSupervisor()
		{
			AnnualSalary=0;
			ProductionBonus=0;
		}
		
		ShiftSupervisor(string,int,int,double,double);
		
		double getAnnualSalary()
		{
			return AnnualSalary;
		}
		
		double getProductionBonus()
		{
			return ProductionBonus;
		}
};

ShiftSupervisor::ShiftSupervisor(string EmployeeName,int EmployeeNumber,int HireDate,double AnnualSalary,double ProductionBonus):Employee(EmployeeName,EmployeeNumber,HireDate){
	this->AnnualSalary=AnnualSalary;
	this->ProductionBonus=ProductionBonus;	
}

int main()
{
	string name;
	int number;
	int date;
	double salary;
	double bonus;
	
	cout<<"enter the employee name ";
	getline(cin,name);
	cout<<"enter the employee ID ";
	cin>>number;
	cout<<"enter the join date ";
	cin>>date;
	cout<<"enter the salary ";
	cin>>salary;
	cout<<"enter the bonus for the employee ";
	cin>>bonus;
	
	ShiftSupervisor data(name,number,date,salary,bonus);
	
	cout<<data.getEmployeeName()<<endl;
	cout<<data.getEmployeeNumber()<<endl;
	cout<<data.getHireDate()<<endl;
	cout<<data.getAnnualSalary()<<endl;
	cout<<data.getProductionBonus()<<endl;
}
