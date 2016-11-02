#include<iostream>
using namespace std;

class Rectangle{
	private:
		double width;
		double length;
		
	public:
		class NegativeWidth{
			private:
				double value;
			public:
				NegativeWidth(double value)
				{
					this->value=value;
				}
				
				double getvalue()
			{
				return value;
			}
		};
		
		class NegativeLength{
			private:
				double value;
			public:
				NegativeLength(double value)
				{
					this->value=value;
				}
				
				double getvalue()
				{
					return value;
				}
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
				throw NegativeWidth(w);
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
				throw NegativeLength(l);
			}
		}
};


int main()
{
	double width;
	double length;
	
	Rectangle Rec1;
	
	cout<<"enter the width ";
	cin>>width;
	
	cout<<"enter the length ";
	cin>>length;
	
	try
	{
		Rec1.setwidth(width);
		Rec1.setlength(length);
		cout<<"the area of rectangle is "<<Rec1.getarea()<<endl;
	}
	
	catch (Rectangle::NegativeWidth e)
	{
		cout<<"error : "<<e.getvalue()<<" is an invalid value for the rectangle's width "<<endl;
		
	}
	catch(Rectangle::NegativeLength e)
	{
		cout<<"error : "<<e.getvalue()<<" is an invalid value for the rectangle's length "<<endl;
	}
	
	cout<<"end program "<<endl;
	return 0;
}
