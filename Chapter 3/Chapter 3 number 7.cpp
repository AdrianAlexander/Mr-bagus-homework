#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	const float adultticket=10;
	const float childticket=6;
	
	
	string moviename;
	cout<<"enter the movie name ";
	getline(cin,moviename);
	cout<<"Movie name "<<moviename<<endl;
	
	cout << setprecision(2) << fixed << showpoint;
	
	int adultticketsold;
	cout<<"amount of adult ticket sold ";
	cin>>adultticketsold;
	
	int childticketsold;
	cout<<"amount of child ticket sold ";
	cin>>childticketsold;
	
	float adultprice=adultticket*adultticketsold;
	float childprice=childticket*childticketsold;
	
	float grossprofit=adultprice+childprice;
	cout<<"Gross box office profit "<<" $ "<<grossprofit<<endl;
	
	float netprofit=grossprofit*0.2;
	cout<<"Net box office profit "<<" $ "<<netprofit<<endl;
	
	float amountpaidtodistributor=grossprofit-netprofit;
	cout<<"amount paid to distributor "<<" $ "<<amountpaidtodistributor;
	
	
	
	
}
