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
		string bookname;
		Author *author;
		double price;
		int qty=0;
		
	public:
		Book()
		{}
		Book(string bookname,Author author[],double price)
		{
			this->bookname=bookname;
			this->author = new Author[2];
			for(int i=0;i<2;i++)
			{
			this->author[i]=author[i];
			}
			this->price=price;
		}
		
		Book(string bookname,Author author[],double price,int qty)
		{
			this->bookname=bookname;
			this->author = new Author[2];
			for(int i=0;i<2;i++)
			{
			this->author[i]=author[i];
			}
			this->price=price;
			this->qty=qty;
		}
		
		void setbookname(string bookname)
		{
			this->bookname=bookname;
		}
		
		void setprice(double price)
		{
			this->price=price;
		}
		
		/*void setauthor(Author author)
		{
			this->authorauthor;
		}*/
		
		void setqty(int qty)
		{
			this->qty=qty;
		}
		
		string getbookname()
		{
			return bookname;
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
			return *author;
		}
		
		string tostring()
		{
			string prices,qtys;
			
			prices=to_string(price);
			qtys=to_string(qty);
			
			return "Book["+bookname+","+author[0].tostring()+" "+author[1].tostring()+","+prices+","+qtys+"]";
		}
		
		
		
};


int main()
{
	Author ff [2] ={Author("Adrian","dotakillingspree@yahoo.com",'m'), Author("Lezley","Lezley@gmail.com",'f')};
	//cout<<ff[2].tostring()<<endl;
	Book book1("kill for dummies",ff,50000,10);
	cout<<book1.tostring()<<endl;
	
	return 0;
}
