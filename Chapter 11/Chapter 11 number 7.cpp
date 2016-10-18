#include<iostream>
#include<string>
using namespace std;
struct customeraccount{
	string name;
	string address;
	string city;
	string telephonenumber;
	unsigned int accountbalance;
	int dateoflastpayment;
};

int main()
{
	customeraccount account[10];
	
	for (int i=0;i<10;i++)
	{
		
		cout<<"Name : ";
		getline(cin,account[i].name);
		
		
		cout<<"adress : ";
		getline(cin,account[i].address);
	
		
		cout<<"city,state,zip : ";
		getline(cin,account[i].city);
		
		
		cout<<"telephone number : ";
		getline(cin,account[i].telephonenumber);
		
		
		cout<<"account balance : ";
		cin>>account[i].accountbalance;
		
		cout<<"Date of last payment : ";
		cin>>account[i].dateoflastpayment;
		cout<<endl<<endl;
		
		
		cin.ignore();
		
		
		
		
		
				
	}
}


