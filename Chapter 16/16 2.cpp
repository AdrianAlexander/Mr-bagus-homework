#include<iostream>
using namespace std;

class Rectangle{
	private:
		double width;
		double length;
		
	public:
		class NegativeSize{
		};
		
		Rectangle()
		{
			width=0;
			length=0;
		}
		
		Rectangle(double width,double length)
		{
			this->width=width;
			this->length=length;
		}
		
		double getwidth()
		{
			return width;
		}
		
		double getlength()
		{
			return length;
		}
		
		double getarea()
		{
			return width*length;
		}
		
		void setwidth(double w)
		{
			if(w>0)
			{
				width=w;
			}
			else
			{
				throw NegativeSize();
			}
		}
		
		void setlength(double l)
		{
			if(l>0)
			{
				length=l;
			}
			else
			{
				throw NegativeSize();
			}
		}
};


int main()
{
	double a;
	double b;
	bool tryagain=true;
	
	cout<<"enter the width ";
	cin>>a;
	
	cout<<"enter the length ";
	cin>>b;
	
	Rectangle rec1;
	
	try
	{
		rec1.setwidth(a);
		rec1.setlength(b);
		//cout<<"the area is "<<" "<<rec1.getarea()<<endl;
	}
	catch(Rectangle::NegativeSize)
	{
		cout<<"error : there is a negative value ";
	}
	
	cout<<"end program";
	
	return 0;
}
