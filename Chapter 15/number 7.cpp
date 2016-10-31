#include<iostream>
using namespace std;

class CustomerData{
	private:
		int CustomerNumber;
		bool mailinglist;
	
	public:
		CustomerData()
		{
			CustomerNumber=0;
			mailinglist=false;
		}
		
		CustomerData(int CustomerNumber,bool mailinglist)
		{
			this->CustomerNumber=CustomerNumber;
			this->mailinglist=mailinglist;
		}
		
		void setCustomerNumber(int customer)
		{
			CustomerNumber=customer;
		}
		
		void setmailinglist(bool mail)
		{
			mailinglist=mail;
		}
		
		int getCustomerNumber()
		{
			return CustomerNumber;
		}
		
		bool getmailinglist()
		{
			return mailinglist;
		}
};

class PrefferedCustomer:public CustomerData{
	private:
		double purchaseamount;
		double discountlevel;
		
	public:
		PrefferedCustomer()
		{
			purchaseamount=0;
			discountlevel=0;
		}
		
		PrefferedCustomer(int,bool,double,double);
		
		double getpurchaseamount()
		{
			return purchaseamount;
		}
		
		double getdiscountlevel()
		{
			return discountlevel;
		}
		
};

PrefferedCustomer::PrefferedCustomer(int CustomerNumber,bool mailinglist,double purchaseamount,double discountlevel):CustomerData(CustomerNumber,mailinglist){
this->purchaseamount=purchaseamount;
this->discountlevel=discountlevel;	
}


int main()
{
	int customer;
	string mail;
	bool ml;
	double purchase;
	double discount;
	
	cout<<"enter your customer number ";
	cin>>customer;
	
	cout<<"do you want to be included in our mailing list (yes/no) ";
	cin>>mail;
	
	if (mail=="yes")
	{
		ml=true;
	}
	else if(mail=="no")
	{
		ml=false;
	}
	
	cout<<"enter the amount price of the thing you bought ";
	cin>>purchase;
	
	if(purchase==500)
	{
		discount=0.05*100;
	}
	else if (purchase==1000)
	{
		discount=0.06*100;
	}
	else if (purchase==1500)
	{
		discount=0.07*100;
	}
	else if(purchase==2000)
	{
		discount=0.1*100;
	}
	
	
	PrefferedCustomer customer1(customer,ml,purchase,discount);
	cout<<"customer number : "<<customer1.getCustomerNumber()<<endl;
	cout<<"mail stats : "<<customer1.getmailinglist()<<endl;
	cout<<"purchase amount : "<<customer1.getpurchaseamount()<<endl;
	cout<<"discount : "<<customer1.getdiscountlevel()<<endl;
	
}
