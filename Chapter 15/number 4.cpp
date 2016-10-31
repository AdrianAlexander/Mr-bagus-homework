#include <iostream>
using namespace std;

class Time{
	private:
		int timehour;
		int timemin;
	public:
		Time()
		{
			timehour=0;
			timemin=0;
		}
		
		Time(int timehour,int timemin)
		{
			this->timehour=timehour;
			this->timemin=timemin;
		}
		
		void settimehour(int th)
		{
			timehour=th;
		}
		
		void settimemin(int tm)
		{
			timemin=tm
		}
		
		int gettimehour()
		{
			return timehour;
		}
		
		int gettimemin()
		{
			return timemin;
		}
		
};


class MilTime:public Time{
	
};
