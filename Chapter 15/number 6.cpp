#include <iostream>
using namespace std;

class PersonData{
	private:
		string lastname;
		string firstname;
		string adress;
		string city;
		string state;
		string zip;
		string phone;
		
	public:
		PersonData()
		{
			string lastname=" ";
			string firstname=" ";
			string adress=" ";
			string city=" ";
			string state=" ";
			string zip=" ";
			string phone=" ";
		}
		
		PersonData(string lastname,string firstname,string adress,string city,string state,string zip,string phone)
		{
			this->lastname=lastname;
			this->firstname=firstname;
			this->adress=adress;
			this->city=city;
			this->state=state;
			this->zip=zip;
			this->phone=phone;
		}
		
		void setlastname(string ln)
		{
			lastname=ln;
		}
		
		void setfirstname(string fn)
		{
			firstname=fn;
		}
		
		void setadress(string ad)
		{
			adress=ad;
		}
		
		void setcity(string c)
		{
			city=c;
		}
		
		void setstate(string s)
		{
			state=s;
		}
		
		void setzip(string z)
		{
			zip=z;
			
		}
		
		void setphone(string p)
		{
			phone=p;
		}
		
		string getlastname()
		{
			return lastname;
		}
		
		string getfirstname()
		{
			return firstname;
		}
		
		string getadress()
		{
			return adress;
		}
		
		string getcity()
		{
			return city;
		}
		
		string getstate()
		{
			return state;
		}
		
		string getzip()
		{
			return zip;
		}
		
		string getphone()
		{
			return phone;
		}
		
};

class CustomerData:public PersonData{
	private:
		int customernumber;
		bool mailinglist;
		
	public:
		CustomerData()
		{
			customernumber=0;
			mailinglist=false;
		}
		
		CustomerData(string,string,string,string,string,string,string,int,bool);
		
		int getcustomernumber()
		{
			return customernumber;
		}
		
		bool getmailinglist()
		{
			return mailinglist;
		}
		
			
};

CustomerData::CustomerData(string lastname,string firstname,string adress,string city,string state,string zip,string phone,int customernumber,bool mailinglist):PersonData(lastname,firstname,adress,city,state,zip,phone){
this->customernumber=customernumber;
this->mailinglist=mailinglist;	
}

int main()
{
	string ln;
	string fn;
	string ad;
	string city;
	string state;
	string zip;
	string phone;
	string mail;
	int cn;
	bool ml;
	
	cout<<"input your last name ";
	cin>>ln;
	
	cout<<"input your first name ";
	cin>>fn;
	
	cout<<"input your adress ";
	cin>>ad;
	
	cout<<"input the city you live in ";
	cin>>city;
	
	cout<<"input the your state ";
	cin>>state;
	
	cout<<"input your zip code ";
	cin>>zip;
	
	cout<<"input your phone number ";
	cin>>phone;
	
	cout<<"input your customer number ";
	cin>>cn;
	
	cout<<"do you want to be on our mailing list (yes/no) ";
	cin>>mail;
	
	if(mail=="yes")
	{
		ml=true;
	}
	else if(mail=="no")
	{
		ml=false;
	}
	
	
	CustomerData Data1(ln,fn,ad,city,state,zip,phone,cn,ml);
 	
	cout<<"last name : "<<Data1.getlastname()<<endl;
	cout<<"first name : "<<Data1.getfirstname()<<endl;
	cout<<"adress : "<<Data1.getadress()<<endl;
	cout<<"city : "<<Data1.getcity()<<endl;
	cout<<"state : "<<Data1.getstate()<<endl;
	cout<<"zip : "<<Data1.getzip()<<endl;
	cout<<"phone : "<<Data1.getphone()<<endl;
	cout<<"Customer Number : "<<Data1.getcustomernumber()<<endl;
	cout<<"Mail stats : "<<Data1.getmailinglist();
	
	return 0;	
	
	
	
}
