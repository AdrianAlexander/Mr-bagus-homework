#include <iostream>
using namespace std;

template <class minValue>
int minimum(minValue num1, minValue num2)
{
	if(num1 < num2)
	{
		int numbers[num1 - 1]; 
		for(int i = 0; i < num1 - 1; i++)
		{
			cout << numbers[i + 1] << " ";
		}
		cout << endl;
	}
	
	if(num1 > num2)
	{
		int numbers[num2 - 1];
		for(int i = 0; i < num2 - 1; i++)
		{
			cout << numbers[i + 1] << " ";
		}
		cout << endl;
	}
}

template <class maxValue>
int maximum(maxValue num1, maxValue num2)
{
	const int NUM = 10;
	int numbers[NUM];
	
	if(num1 < num2)
	{
		int numbers[NUM - num2]; 
		for(int j = 0; j < NUM - num2; j++)
		{
			cout << numbers[j + 1] << " ";
		}
	}
	
	if(num1 > num2)
	{
		int numbers[NUM - num1];
		for(int j = 0; j < NUM - num1; j++)
		{
			cout << numbers[j + 1] << " ";
		}
	}
}

int main(){
	
	minimum(2, 3);
	maximum(6, 7);
	
	return 0;
	
}
