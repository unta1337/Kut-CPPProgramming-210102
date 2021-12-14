//#define W102

#ifdef W102

#include <iostream>

using namespace std;

class Car
{
	int speed, gear;
	string color;

public:
	Car(int s = 0, int g = 1, string c = "white") : speed(s), gear(g), color(c) { }

	void print();
};

void Car::print()
{
	cout << "Speed: " << this->speed << endl;
	cout << "Gear: " << this->gear << endl;
	cout << "color: " << this->color << endl;
}

int main(void)
{
	Car* pc1 = new Car();
	Car* pc2 = new Car(10, 2, "black");

	cout << "sizeof(pc1): " << sizeof(pc1) << endl;
	cout << "sizeof(*pc1): " << sizeof(*pc1) << endl;
	cout << "sizeof(pc2): " << sizeof(pc2) << endl;
	cout << "sizeof(*pc2): " << sizeof(*pc2) << endl << endl;

	pc1->print();
	cout << endl;
	pc2->print();
	cout << endl;

	delete pc1;
	delete pc2;

	return 0;
}

#endif