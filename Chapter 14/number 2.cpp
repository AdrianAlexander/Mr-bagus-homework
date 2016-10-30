#include <iostream>
using namespace std;

class Day{
	private:
		int day;
		string month[12] = {"January", "February", "March", "April", "May", "June",
							  "July", "August", "September", "October", "November", "December"};
		int dateEachMonth[13] = {0, 31, 59, 90, 121, 152, 183, 213, 245, 276, 307, 338, 369};
	public:
		
		Day(int day)
		{
			this->day = day;
		}
	
		void print()
		{
			for(int i = 0; i < 12; i++)
			{
				if(dateEachMonth[i + 1] - day >= 0)
				{
					cout << month[i] << " " << day - dateEachMonth[i] << endl;
					break;
				}
			}
		}
};


int main(){
	
	int day;
	cout << "Input the day: ";
	cin >> day;
	

	Day daymonth(day);
	daymonth.print();
	
}

