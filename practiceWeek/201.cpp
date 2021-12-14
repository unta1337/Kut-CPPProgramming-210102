//#define W201

#ifdef W201

#include <iostream>

using namespace std;

class Car
{
	int speed;
	int gear;
	string color;

	static int numberOfCars;

public:
	Car(int speed, int gear, string color)
	{
		this->speed = speed;
		this->gear = gear;
		this->color = color;

		numberOfCars++;
	}

	~Car()
	{
		numberOfCars--;
	}

	void print()
	{
		cout << "Car No." << numberOfCars << endl;
		cout << "Speed: " << speed << endl;
		cout << "Gear: " << gear << endl;
		cout << "Color: " << color << endl;
	}

	static int howManyCars()
	{
		return numberOfCars;
	}
};
int Car::numberOfCars = 0;

int main(void)
{
	Car* c[5];
	for (int i = 0; i < 5; i++)
	{
		c[i] = new Car(10, 1, "white");
		c[i]->print();
		cout << endl;
	}

	cout << "Total: " << Car::howManyCars();

	return 0;
}

#endif