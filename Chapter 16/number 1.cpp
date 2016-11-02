#include <iostream>
using namespace std;

class Date{
	private:
		int month;
		int day;
		int year;
		string months[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	public:
		class InvalidDay{
			private:
				int day;
			public:
				InvalidDay(int day)
				{
					this->day=day;
				}
				
				int getday()
				{
					return day;
				}
		};
		
		class InvalidMonth{
			private:
				int month;
			public:
				InvalidMonth(int month)
				{
					this->month=month;
				}
				
				int getmonth()
				{
					return month;
				}
		};
		
		
		
		Date()
		{
			month=0;
			day=0;
			year=0;
			
		}
		
		Date(int day,int month,int year)
		{
			this->month=month;
			this->day=day;
			this->year=year;
		}
		
		Date(int day,string months[],int year)
		{
			this->months[12]=months[12];
			this->day=day;
			this->year=year;
		}
		
		
		void setmonth(int m)
		{
			if(m>=1 && m<=12)
			{
			month=m;
			}
			else
			{
				throw InvalidMonth(m);
			}
		}
		
		void setday(int d)
		{
			if(d>=1 && d<=31)
			{
			day=d;
			}
			else
			{
				throw InvalidDay(d);
			}
		}
		
		void setyear(int y)
		{
			year=y;
		}
		
		void setmonths(string m[])
		
		{
			 
			months[12]=m[12];
		}
		
		string getmonths()
		{
			return months[12];
		}
		
		int getmonth()
		{
			return month;
		}
		
		int getday()
		{
			return day;
		}
		
		int getyear()
		{
			return year;
		}
};

int main()
{
	int day;
	int year;
	int month;
	string months;
	
	cout<<"input the day ";
	cin>>day;
	
	cout<<"input the month ";
	cin>>month;
	
	cout<<"input the year ";
	cin>>year;
	
	//cout<<"input month (in words) ";
	//cin>>months;
	
	Date first(day,month,year);
	//Date second(day,months,year);
	//Date third(day,months,year);
	
	try
	{
		first.setday(day);
		first.setmonth(month);
		first.setyear(year);
		/*second.setday(day);
		second.setmonths(months);
		second.setyear(year);*/
		cout<<first.getday()<<"/"<<first.getmonth()<<"/"<<first.getyear();
		//cout<<second.getmonth()<<","<<second.getday()<<","<<second.getyear();
	}
	
	catch (Date::InvalidDay I)
	{
		cout<<"error "<<I.getday()<<" you cannot input a number less than 1 and more than 31 ";
	}
	
	catch(Date::InvalidMonth M)
	{
		cout<<"error "<<M.getmonth()<<" you cannot input a number less than 1 and more than 12 ";
	}
	
	
	
	cout<<" end program ";
	
	return 0;
}
