#include <iostream>
#include <string>
using namespace std;

struct movie{
	string title;
	string Director;
	int yearrelease;
	int runningtime; //in second then change it to minutes
	int productioncost;
	int sales;
	
};

int main()
{
	movie movie1, movie2;
	char dummy;
	movie1.title="Strike Witches ";
	movie1.Director="Adrian Alexander ";
	movie1.yearrelease=2008;
	movie1.runningtime=14500;
	movie1.productioncost=20000;
	movie1.sales=40000;
	
	cout<<"the movie title is "<<movie1.title<<endl;
	cout<<"the director of the movie is "<<movie1.Director<<endl;
	cout<<"the movie was release in "<<movie1.yearrelease<<endl;
	cout<<"the length time of the movie is "<<movie1.runningtime/60<<" minutes"<<endl;
	cout<<"the revenue for Strike Witches $"<<movie1.sales-movie1.productioncost<<endl<<endl;
	
	
	
	movie2.title="Brave Witches ";
	movie2.Director="Gary ";
	movie2.yearrelease=2010;
	movie2.runningtime=14500;
	movie2.productioncost=40000;
	movie2.sales=80000;
	
	cout<<"the movie title is "<<movie2.title<<endl;
	cout<<"the director of the movie is "<<movie2.Director<<endl;
	cout<<"the movie was release in "<<movie2.yearrelease<<endl;
	cout<<"the length time of the movie is "<<movie2.runningtime/60<<" minutes"<<endl;
	cout<<"the revenue for Brave Witche $"<<movie2.sales-movie2.productioncost<<endl;
	
	
	return 0;
}
