//#define W204

#ifdef W204

#include <iostream>

using namespace std;

class Vector2D
{
	int x, y;

public:
	Vector2D(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	void print()
	{
		cout << "Element Address: " << this << endl;
		cout << "(" << x << ", " << y << ")";
	}
};

int main(void)
{
	Vector2D points1[] = {
		Vector2D(0, 0),
		Vector2D(100, 200),
		Vector2D(200, 300),
		Vector2D(300, 400),
		Vector2D(400, 500)
	};

	cout << "Array Length: " << sizeof(points1) / sizeof(points1[0]) << endl;
	cout << "Array Address: " << points1 << endl;
	for (int i = 0; i < 5; i++)
	{
		points1[i].print();
		cout << endl;
	}
	cout << endl;

	Vector2D *points2[7];
	for (int i = 0; i < 7; i++)
		points2[i] = new Vector2D(100 * i, 100 * (i + 1));

	cout << "Array Length: " << sizeof(points2) / sizeof(points2[0]) << endl;
	cout << "Pointer Array Address: " << points2 << endl;
	cout << "Array Address: " << points2[0] << endl;
	for (int i = 0; i < 5; i++)
	{
		points2[i]->print();
		cout << endl;
	}
	cout << endl;

	return 0;
}

#endif