#define W307

#ifdef W307

#include <iostream>

using namespace std;

class Base
{
public:
	Base() { }

	virtual ~Base() { }

	void print() const
	{
		cout << "Base::print()\n";
	}

	virtual void display() const
	{
		cout << "Base::display()\n";
	}
};

class Derived : public Base
{
public:
	Derived() { }

	virtual ~Derived() { }

	void print() const
	{
		cout << "Derived::print()\n";
	}

	virtual void display() const
	{
		cout << "Derived::display()\n";
	}
}; 

int main(void)
{
	Derived d;
	Base* pd1 = new Base;
	Base* pd2 = new Derived;
	d.print();
	d.display();
	pd1->print();
	pd1->display();
	pd2->print();
	pd2->display();
	delete pd1;
	delete pd2;

	return 0;
}

#endif