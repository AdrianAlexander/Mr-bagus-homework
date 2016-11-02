#include<iostream>
using namespace std;

template<class Total>
int displayTotal(Total totalsum)
{
	return totalsum;
}

int main(){
	
	int numbers[3];
	int counter;
	int total;
	
	for(counter = 0; counter < 3; counter++)
	{
		cout << "Input number " << counter + 1<<" : ";
		cin >> numbers[counter];
	
	}
	
	for(counter = 0; counter < 3; counter++)
	{
		total += numbers[counter];
	}

	cout << "Total sum : " << displayTotal(total);
	
}
