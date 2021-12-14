//#define W202

#ifdef W202

#include <iostream>

using namespace std;

class Employee
{
	string name;
	int salary;
	int id;

	static int count;

public:
	Employee(string name, int salary)
	{
		this->name = name;
		this->salary = salary;

		count++;

		id = count;
	}

	~Employee()
	{
		cout << name << " has quit the job." << endl;

		count--;
	}

	void print()
	{
		cout << "Employee No." << id << endl;
		cout << "Name: " << name << endl;
		cout << "Salary: " << salary << endl << endl;
	}

	static int getCount()
	{
		return count;
	}
};
int Employee::count = 0;

int main(void)
{
	Employee *e1 = new Employee("Joe", 2000);
	Employee *e2 = new Employee("Jane", 2500);
	Employee *e3 = new Employee("John", 3000);

	e1->print();
	e2->print();
	e3->print();

	cout << "Total: " << Employee::getCount() << endl;

	delete e2;
	cout << endl;

	cout << "Total: " << Employee::getCount() << endl;

	return 0;
}

#endif