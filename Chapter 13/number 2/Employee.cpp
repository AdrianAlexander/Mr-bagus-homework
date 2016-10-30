#include <string>
using namespace std;

class Employee{
	private:
		string name;
		int idNumber;
		string department;
		string position;
	public:
		
		Employee()
		{
			name = "";
			idNumber = 0;
			department = "";
			position = "";
		}
		
	
		Employee(string name, int idNumber, string department, string position)
		{
			this->name = name;
			this->idNumber = idNumber;
			this->department = department;
			this->position = position;
		}
		
		
		Employee(string name, int idNumber)
		{
			this->name = name;
			this->idNumber = idNumber;
		}
		
		
		void setName(string n)
		{
			name = n;
		}
		
		
		void setID(int id)
		{
			idNumber = id;
		}
		
		
		void setDepartment(string d)
		{
			department = d;
		}
		
		
		void setPosition(string p)
		{
			position = p;
		}
		
		
		string getName() const
		{
			return name;
		}
		
		
		int getID() const
		{
			return idNumber;
		}
		
		
		string getDepartment() const
		{
			return department;
		}
		
		
		string getPosition() const
		{
			return position;
		}
};


