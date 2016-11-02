#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class MyPoint{
	
		int x=0;
		int y=0;
		/*int *getxy();*/
		//double distance(int x,int y);
		//double distance(MyPoint p);
		
	public:
		MyPoint()
		{}
		
		MyPoint(int x,int y)
		{
			this->x=x;
			this->y=y;
		}
		
		void setx(int x)
		{
			this->x=x;
		}
		
		void sety(int y)
		{
			this->y=y;
		}
		
		void setxy(int x,int y)
		{
			this->x=x;
			this->y=y;
		}
		
		int getx()
		{
			return x;
		}
		
		int gety()
		{
			return y;
		}
		
		int *getxy()
		{
			int *array=new int[2];
			array[0]=this->x;
			array[1]=this->y;
			return array;
		}
		
		string tostring()
		{
			return "("+to_string(x)+","+to_string(y)+")";
		}
		
		double distance(int x,int y)
		{
			return sqrt(pow((this->x-x),2)+pow((this->y=y),2));
		}
		
		double distance(MyPoint p)
		{
			return distance(p.x , p.y);
		}
};


int main()
{
	MyPoint mp;
	mp.setx(5);
	mp.sety(8);
	
	int *array=mp.getxy();
	cout<<array[0];
	cout<<array[1];
	
}
