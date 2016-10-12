#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int test;
	float average;
	
	cout<<"input how many test you have done ";
	cin>>test;
	
	for(int i=1;i<=test;i++)
	{
		float score;
		cout<<"enter your test score"<< i << ": ";
		cin>>score;
	 	average += score/5;
	}
	
	cout << setprecision(2) << fixed << showpoint;
	
	cout<<"the average is "<<average;
	return 0;
	
	
	
}
