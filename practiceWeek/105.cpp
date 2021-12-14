//#define W105

#ifdef W105

#include <iostream>

using namespace std;

class Car
{
	int speed, gear;
	string color;

public:
	Car(int s = 0, int g = 1, string c = "white") : speed(s), gear(g), color(c) { }

	void print()
	{
		cout << "Speed: " << this->speed << endl;
		cout << "Gear: " << this->gear << endl;
		cout << "color: " << this->color << endl;
	}

	void callByValueSwap(Car other)
	{
		Car temp = *this;
		*this = other;
		other = temp;
	}

	void callByAddressSwap(Car *other)
	{
		Car temp = *this;
		*this = *other;
		*other = temp;
	}

	void callByReference(Car &other)
	{
		Car temp = *this;
		*this = other;
		other = temp;
	}
};

int main(void)
{
	Car c1(100, 2, "blue");
	c1.print();
	cout << endl;

	Car c2(200, 1, "red");
	c2.print();
	cout << endl;

	//c1.callByValueSwap(c2);
	//c1.callByAddressSwap(&c2);
	c1.callByReference(c2);

	c1.print();
	cout << endl;
	c2.print();
	cout << endl;

	return 0;
}

#endif