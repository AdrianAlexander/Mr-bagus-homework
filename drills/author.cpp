#include <iostream>
using namespace std;

class Author{
	private:
		string name;
		string email;
		char gender;
		
	public:
		Author()
		{
			name=" ";
			email=" ";
			gender=' ';
		}
		
		Author(string name,string email,char gender)
		{
			this->name=name;
			this->email=email;
			this->gender=gender;
		}
		
		string getname()
		{
			return name;
		}
		
		string getemail()
		{
			return email;
		}
		
		char getgender()
		{
			return gender;
		}
		
		void setemail(string email)
		{
			this->email=email;
		}
		
		void setname(string name)
		{
			this->name=name;
		}
		
		void setgender(char gender)
		{
			this->gender=gender;
		}
		
		string tostring()
		{
			//first way
			/*string complete,names,genders,emails;
			names=getname();
			genders=getgender();
			emails=getemail();
			complete= "Author["+names+","+emails+","+genders+"]";//1
			return complete;*/
			//second way
			return "Author["+name+","+email+","+gender+"]";//2
		}
		
		
};


int main()
{
	//2
	string name;
	string email;
	char gender;
	
	cout<<"input your name ";
	cin>>name;
	
	cout<<"input your email ";
	cin>>email;
	
	cout<<"input your gender (M/F) ";
	cin>>gender;
	if(gender == 'F' || gender== 'f')
	{
		cout<<"Female";
	}
	else if(gender== 'M' ||gender== 'm')
	{
		cout<<"male";
	}
	
	
	//Author Author1=Author("Adrian Alexander","dotakillingspree@yahoo.com",'M');//1
	//cout<<Author1.tostring()<<endl;
	
	Author Author2(name,email,gender);
	cout<<Author2.tostring();
	
	
	return 0;
}
