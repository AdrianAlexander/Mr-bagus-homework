#include <iostream>
using namespace std;

struct Weather{
//in month
	float totalrainfall;
	float Hightemperature;
	float Lowtemperature;
	float averagetemperature;
	string month;
};

int main()
{
	float averagetemperatureyear;
	int totalrainfallyear;
	float averagetotalrainfallyear;
	int highesttemperaturemonth,  lowesttemperaturemonth;
	
	Weather weatherarray[12];
	string month[12]={"January","February","March","April","may","June","July","August","September","October","November","December"};
	
	cout<<"input month,rainfall,Highest temperature,Lowest Temperature,Average Temperature "<<endl<<endl;
	for(int i=0;i<12;i++)
	{
		cout<<"month "<<month[i]<<endl;
		cout<<"total rain ";
		cin>>weatherarray[i].totalrainfall;
		cout<<"Highest Temperature this month ";
		cin>>weatherarray[i].Hightemperature;
		cout<<"Lowest Temperature this month ";
		cin>>weatherarray[i].Lowtemperature;
		//cout<<"Average Temperature this month ";
		/*cin>>weatherarray[i].averagetemperature;
		cout<<endl;*/
		
	totalrainfallyear=totalrainfallyear+weatherarray[i].totalrainfall;
	weatherarray[i].averagetemperature=(weatherarray[i].Hightemperature+weatherarray[i].Lowtemperature)/2;
	cout<<"average temperature is "<<weatherarray[i].averagetemperature<<endl<<endl;
		
		
		
	}
	
	cout<<"total year rain fall is "<<totalrainfallyear;
	
	
	return 0;
}

