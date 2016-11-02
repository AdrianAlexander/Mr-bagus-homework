#include <iostream>
using namespace std;

//number 1
class Author{
	private:
		string name;
		string email;
		char gender;
		
	public:
		Author()
		{}
		
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

//number 2
class Book{
	private:
		string name;
		Author author;
		double price;
		int qty;
		
	public:
		Book()
		{}
		Book(string name,Author author,double price)
		{
			this->name=name;
			this->author=author;
			this->price=price;
		}
		
		Book(string name,Author author,double price,int qty)
		{
			this->name=name;
			this->author=author;
			this->price=price;
			this->qty=qty;
		}
		
		void setname(string name)
		{
			this->name=name;
		}
		
		void setprice(double price)
		{
			this->price=price;
		}
		
		void setauthor(Author author)
		{
			this->author=author;
		}
		
		void setqty(int qty)
		{
			this->qty=qty;
		}
		
		string getname()
		{
			return name;
		}
		
		double getprice()
		{
			return price;
		}
		
		int getqty()
		{
			return qty;
		}
		
		Author getauthor()
		{
			return author;
		}
		
		string tostring()
		{
			string prices,qtys;
			
			prices=to_string(price);
			qtys=to_string(qty);
			
			return "Book["+name+","+author.tostring()+","+prices+","+qtys+"]";
		}
		
		
		
};


int main()
{
	Author ff ("Adrian","dotakillingspree@yahoo.com",'m');
	cout<<ff.tostring()<<endl;
	Book book1("Way of life",ff,50000,10);
	cout<<book1.tostring()<<endl;
}
