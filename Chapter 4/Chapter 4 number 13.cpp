
#include<iostream>
#include<string>
using namespace std;
int main ()
{
	const int books0 = 0,
	books1 = 5,
	books2 =10,
	books3 =30,
	books4 =60;
	
	int amountofbookbought;
	
	
	cout<<"enter the amount of book you already bought ";
	cin>>amountofbookbought;
	
	if(amountofbookbought<0)
	{
		return 0;
	}
	
	if (amountofbookbought==0)
	{
		cout<<"you got "<<books0<<" points";
	}
	else if (amountofbookbought==1)
	{
		cout<<"you got "<<books1<<" points";
	}
	else if (amountofbookbought==2)
	{
		cout<<"you got "<<books2<<" points";
	}
	else if (amountofbookbought==3)
	{
		cout<<"you got "<<books3<<" points";
	}
	else 
	{
		cout<<"you got "<<books4<<" points";
	}
	return 0;
}
