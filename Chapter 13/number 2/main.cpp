#include <iostream>
#include <iomanip>
#include "Employee.cpp"

using namespace std;

Employee employee1("Susan Meyers", 47899, "Accounting", "Vice President");
Employee employee2("Mark Jones", 39119, "IT", "Programmer");
Employee employee3("Joy Rogers", 81774, "Manufacturing", "Engineer");

int main(){
	
	
	cout<<"Name"<<" "<<"ID Number"<<" "<<"Department"<<" "<<"Position"<<endl<<endl;
	cout<<employee1.getName()<< "  "<<employee1.getID()<< "  "<<employee1.getDepartment() << "	"  <<employee1.getPosition() <<endl;
	cout<<employee2.getName()<< "  "<<employee2.getID()<< "  "<<employee2.getDepartment() << "  " <<employee2.getPosition() <<endl;
	cout<<employee3.getName()<< "  "<<employee3.getID()<< "  "<<employee3.getDepartment() << "  " <<employee3.getPosition() <<endl;
	
	return 0;
	
}

