#include <iostream>
#include <string>
using namespace std;

struct movie{
	string title;
	string Director;
	int yearrelease;
	int runningtime; //in second then change it to minutes
	
};

//programmer decide the input;
int main()
{
	movie movie1, movie2;
	char dummy;
	movie1.title="Strike Witches ";
	movie1.Director="Adrian Alexander ";
	movie1.yearrelease=2008;
	movie1.runningtime=14500;
	
	cout<<"the movie title is "<<movie1.title<<endl;
	cout<<"the director of the movie is "<<movie1.Director<<endl;
	cout<<"the movie was release in "<<movie1.yearrelease<<endl;
	cout<<"the length time of the movie is "<<movie1.runningtime/60<<" minutes"<<endl<<endl;
	
	
	movie2.title="Brave Witches ";
	movie2.Director="Gary ";
	movie2.yearrelease=2010;
	movie2.runningtime=14500;
	
	cout<<"the movie title is "<<movie2.title<<endl;
	cout<<"the director of the movie is "<<movie2.Director<<endl;
	cout<<"the movie was release in "<<movie2.yearrelease<<endl;
	cout<<"the length time of the movie is "<<movie2.runningtime/60<<" minutes"<<endl<<endl;
	
	
/*	user input type
	cout<<"enter the movie title ";													
	getline(cin,movie1.title);
	
	cout<<"enter the Director of the Movie ";
	getline(cin, movie1.Director);
	
	cout<<"enter the year of release ";
	cin>>movie1.yearrelease;
	
	cout<<"enter the length time of the movie in second ";
	cin>>movie1.runningtime;
	cout<<endl; 
	
	cout<<"enter the movie title ";
	cin>>dummy;													
	getline(cin,movie2.title);

	
	cout<<"enter the Director of the Movie ";
	getline(cin, movie2.Director);
	
	
	cout<<"enter the year of release ";
	cin>>movie2.yearrelease;
	
	
	cout<<"enter the length time of the movie in second ";
	cin>>movie2.runningtime; 
	cout<<endl;
	
	
	cout<<"the movie title is "<<movie1.title<<endl;
	cout<<"the Director of the movie is "<<movie1.Director<<endl;
	cout<<"the movie was release in "<<movie1.yearrelease<<endl;
	cout<<"the length time of the movie is "<<movie1.runningtime/60<<" minutes"<<endl<<endl;
	
	
	

	
	
	cout<<"the movie title is "<<movie2.title<<endl;
	cout<<"the Director of the movie is "<<movie2.Director<<endl;
	cout<<"the movie was release in "<<movie2.yearrelease<<endl;
	cout<<"the length time of the movie is "<<movie2.runningtime/60<<" minutes"<<endl;*/
	return 0;
}
