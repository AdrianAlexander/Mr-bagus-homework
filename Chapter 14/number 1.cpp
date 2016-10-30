#include <iostream>
#include <string>
using namespace std;


class Number{
	private:
		int numbers;
		string lessthan20[20] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", 
									 "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", 
									 "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
		string hundred = "hundred";
		string thousand = "thousand";
		string numberplus10[8] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
		int numberplus10s[8] = {20, 30, 40, 50, 60, 70, 80, 90};
	
		
		
	
	public:
		Number(int num) 
		{
			if(num>=0 && num<=20)
			{
				cout <<lessthan20[num];
			}
			
		else if (num >= 20 && num <= 100)
			{
				int temp, diff;
				for (int i = 0; i < 8; i++) {
					if (numberplus10s[i] - num < 10 && numberplus10s[i] - num >= 0) {
						temp = i - 1;
						diff = numberplus10s[i] - num;
					}

				}
				cout << numberplus10[temp] + " " + lessthan20[diff] << endl;
			}
		}
		int GetNumber()
		{
			return numbers;
		}
	};
	

		
			
		
			

int main(){
	
	cout<<"please input the number ";
	int num;
	cin >> num;
	
	
	Number number(num);
	
	return 0;
}
