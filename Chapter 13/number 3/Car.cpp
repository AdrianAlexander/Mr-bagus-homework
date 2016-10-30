#include<iostream>
using namespace std;

class Car{
	private:
		int yearModel;
		string make;
		int speed;
	
	public:
		Car(int yearmodel)
		{
			this->yearModel=yearmodel;
		}
		
		string getmake()
		{
			return make;
		}
		
		int getspeed()
		{
			return speed;
		}
		
		int getyearModel()
		{
			return yearModel;
		}
		
		void setbrake(int b)
		{
			speed -= b;
		}
		
		void setacceleration(int a)
		{
			speed += a;
		}
};
