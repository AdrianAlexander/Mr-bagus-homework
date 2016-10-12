#include<iostream>
using namespace std;

int main()
{
	float male;
	cout<<"enter the number of male in class ";
	cin>>male;
	
	float female;
	cout<<"enter the number of female in class ";
	cin>>female;
	
	int totalclass=male+female;
	cout<<"total of student in class "<<totalclass<<endl;
	
	
	float percentmale=male/totalclass*100;
	float percentfemale=female/totalclass*100;
	
	cout<<"the percentage of male in class is "<<percentmale<<" %"<<endl;
	cout<<"the percentage of female in class is "<<percentfemale<<" %"<<endl;
	
	return 0;
}
