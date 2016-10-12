#include <iostream>
using namespace std;

int main()
{
	string month[3];
	float amountofrain[3];
	float Average;
	
	
	
	for(int i=0;i<3;i++)
	{
		cout<<"input the months "<< i+1<<" ";
		cin>>month[i];
		cout<<"input amount of rain ";
		cin>>amountofrain[i];
	
	}
	
	Average=(amountofrain[0]+amountofrain[1]+amountofrain[2])/3;
	cout<<"the average of rain drops is "<<Average<<" inches";
	
	return 0;
}
