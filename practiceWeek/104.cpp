//#define W104

#ifdef W104

#include <iostream>

using namespace std;

class Car
{
	const int serial = 001;
	int speed, gear;
	string color;

public:
	Car(int s = 0, int g = 1, string c = "white") : speed(s), gear(g), color(c) { }

	void print()
	{
		cout << "Serial Number: " << this->serial << endl;
		cout << "Speed: " << this->speed << endl;
		cout << "Gear: " << this->gear << endl;
		cout << "color: " << this->color << endl;
	}

	void print() const
	{
		cout << "this is a const function.\n";

		cout << "Serial Number: " << this->serial << endl;
		cout << "Speed: " << this->speed << endl;
		cout << "Gear: " << this->gear << endl;
		cout << "color: " << this->color << endl;
	}
};

int main(void)
{
	Car c1(100, 2, "blue");
	c1.print();

	cout << endl;

	const Car c2(100, 2, "blue");
	c2.print();

	return 0;
}

#endif