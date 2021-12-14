//#define W103

#ifdef W103

#include <iostream>

using namespace std;

class Person
{
	string last, first;

public:
	Person(string last, string first);

	string getLast()
	{
		return last;
	}

	string getFirst()
	{
		return first;
	}

	string buildName();
};

Person::Person(string last, string first)
{
	this->last = last;
	this->first = first;
}

string Person::buildName()
{
	return this->getLast() + " " + this->getFirst();
}

int main(void)
{
	Person p("Hong", "Gildong");
	cout << p.buildName() << endl;

	return 0;
}

#endif