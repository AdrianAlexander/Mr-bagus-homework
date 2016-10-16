#include <iostream>
using namespace std;

int main()
{
	int lengthrectangle1;
	cout<<"enter the length of the first rectangle ";
	cin>>lengthrectangle1;
	
	int widthrectangle1;
	cout<<"enter the width of the first rectangle ";
	cin>>widthrectangle1;
	
	int arearectangle1=lengthrectangle1*widthrectangle1;
	cout<<"this is the area of first rectangle "<<arearectangle1<<endl<<endl;
	
	
	
	int lengthrectangle2;
	cout<<"enter the length of the second rectangle ";
	cin>>lengthrectangle2;
	
	int widthrectangle2;
	cout<<"enter the width of the seccond rectangle ";
	cin>>widthrectangle2;
	
	int arearectangle2=lengthrectangle2*widthrectangle2;
	cout<<"this is the area of second rectangle "<<arearectangle2<<endl<<endl;
	
	if(arearectangle1==arearectangle2)
	{
		cout<<"the area of 2 rectangles are the same ";
	}
	
	else if(arearectangle1>arearectangle2)
	{
		cout<<"the area of rectangle 1 is bigger than rectangle 2 ";
	}
	
	else
	{
		cout<<"the area of rectangle 2 is bigger than rectangle 1";
	}
	
	return 0;
	
}
