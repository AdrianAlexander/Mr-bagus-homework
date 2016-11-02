#include<iostream>
using namespace std;

class Account{
	private:
		double balance;
	public:
		Account()
		{}
		Accute(double init_balance)
		{
			balance=init_balance;
		}
		
		double getbalance()
		{
			return balance;
		}
		
		bool deposit(double amt){
			if(amt<250)
			{
				return false;
			}
			else 
			{
			return true;
			}
			
		}
		bool withdraw(double){
			if(amt<50)
			{
				return false;
			}
			else 
			{
				return true;
			}
		}	
};


class Customer{
	private:
		string firstname;
		string lastname;
		Account account;
	public:
		Customer()
		{}
		Customer(string firstname,string lastname)
		{
			this->firstname=firstname;
			this->lastname=lastname;
		}
		
		void setfirstname(string firstname)
		{
			this->firstname=firstname;
		}
		
		void setlastname(string lastname)
		{
			this->lastname=lastname;
		}
		
		Account getaccount()
		{
			return account;
		}
		
		void setaccount(Account account)
		{
			this->account=account;
		}
	
};


class Bank{
	private:
		Customer *customer;
		int numberofcustomer;
		string bankName;
		
	public:
		Bank()
		{}
		Bank(string bName)
		{
			bankName=bName;
		}
		
		int getnumberofcustomer()
		{
			return customer;
		}
		
		void setnumberofcustomer(int cust)
		{
			numberofcustomer=cust;  `
		}
};
