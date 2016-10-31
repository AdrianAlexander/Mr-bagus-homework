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
		
class ProductionWorker:public Employee{
	private:
		int shift;
		double HourlyPay;
		
	public:
		ProductionWorker()
		{
			int shift=0;
			double HourlyPay=0;
		}
		
		ProductionWorker(string ,int ,int ,int,double );
		
		/*void setshift(int s)
		{
			s=shift;
		}
		
		void setHourlyPay(double h)
		{
			h=HourlyPay;
		}*/
		
		int getshift()
		{
			return shift;
		}
		
		double getHourlyPay()
		{
			return HourlyPay;
		}
		
};

ProductionWorker::ProductionWorker(string EmployeeName,int EmployeeNumber,int HireDate, int shift,double HourlyPay):Employee(EmployeeName,EmployeeNumber,HireDate){
		this->shift = shift;
		this->HourlyPay=HourlyPay;
}

int main()
{
	string name;
	int id;
	int date;
	int shift;
	double hourlypay;
	
	cout<<"enter the employe name ";
	getline(cin,name);
	
	cout<<"enter the employee id ";
	cin>>id;
	
	cout<<"enter the date when the employee join the company ";
	cin>>date;
	
	cout<<"enter the shift work for the employee (1 for day and 2 for night) ";
	cin>>shift;
	
	cout<<"enter the amount of hourly pay ";
	cin>>hourlypay;
	
	ProductionWorker Emp1(name,id,date,shift,hourlypay);
	cout<<Emp1.getEmployeeName() << endl;
	cout << Emp1.getEmployeeNumber() << endl;
	cout << Emp1.getHireDate() << endl;
	if(Emp1.getshift()==1)
	{
		cout<<"day shift "<<endl; 
	}
	else if(Emp1.getshift()==2)
	{
		cout<<"night shift "<<endl;
	}	
	cout<<"$"<< Emp1.getHourlyPay()<<endl;
	
	
}
