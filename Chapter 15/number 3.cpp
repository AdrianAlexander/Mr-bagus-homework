#include<iostream>
using namespace std;

class ProductionWorker{
	private:
		int shift;
		double HourlyPay;
	
	public:
		ProductionWorker()
		{
			int shift=0;
			double HourlyPay=0;
		}
		
		ProductionWorker(int shift,int HourlyPay)
		{
			this->shift=shift;
			this->HourlyPay=HourlyPay;
		}
		
		void setshift(int s)
		{
			shift=s;
		}
		
		void setHourlyPay(double h)
		{
			HourlyPay=h;
		}
		
		int getshift()
		{
			return shift;
		}
		
		int getHourlyPay()
		{
			return HourlyPay;
		}
		

	
};

class TeamLeader:public ProductionWorker{
	private:
		double bonusamount;
		int traininghour;
		int attend;
		
	public:
		TeamLeader(){
			double bonusamount=0;
			int traininghour=0;
			int attend=0;
		}
		
		TeamLeader(int,double,double,int,int);
		
		double getbonusamount()
		{
			return bonusamount;
		}
		
		int gettraininghour()
		{
			return traininghour;
		}
		
		int getattend()
		{
			return attend;
		}
		
		
		
};

TeamLeader::TeamLeader(int shift,double HourlyPay,double bonusamount,int traininghour,int attend):ProductionWorker(shift,HourlyPay){
	this->bonusamount=bonusamount;
	this->traininghour=traininghour;
	this->attend=attend;
}

int main()
{
	int shifttime;
	double hourlypay;
	double bonus;
	int training;
	int attend;
	
	cout<<"input the shift time (1 for day and 2 for night) ";
	cin>>shifttime;
	
	cout<<"input the hourlypay ";
	cin>>hourlypay;
	
	cout<<"input the bonus for employee ";
	cin>>bonus;
	
	cout<<"input the training hours ";
	cin>>training;
	
	cout<<"input the time he attend the training ";
	cin>>attend;
	
	TeamLeader Leader(shifttime,hourlypay,bonus,training,attend);
	if(Leader.getshift()==1)
	{
		cout<<"day shift "<<endl; 
	}
	else if(Leader.getshift()==2)
	{
		cout<<"night shift "<<endl;
	}	
	
	cout<<"$"<<Leader.getHourlyPay()<<endl;
	cout<<"$"<<Leader.getbonusamount()<<endl;
	cout<<Leader.gettraininghour()<<" hours"<<endl;
	cout<<Leader.getattend()<<" times"<<endl;
}
