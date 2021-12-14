//#define W305

#ifdef W305

#include <iostream>

using namespace std;

class Shape
{
public:
	int x, y;

	Shape() { }

	Shape(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	
	virtual ~Shape()
	{
		cout << "Destroyer of Shape.\n";
	}

	// ���� ���� �Լ�(pure virtual function)�� �ϳ��� �ִٸ� �� ��ü�� abstract class�� �ȴ�.
	// �߻� ��ü�� ���� ��ü�� ������ �� ������, ������ ������ ������ ���� �ִ�.
	virtual void draw() = 0;
};

class Rectangle : public Shape
{
public:
	int width, height;

	Rectangle() { }

	Rectangle(int x, int y, int width, int height) : Shape(x, y)
	{
		this->width = width;
		this->height = height;
	}

	virtual ~Rectangle()
	{
		cout << "Destroyer of Rectangle.\n";
	}

	virtual void draw()
	{
		cout << "Drawing a rectangle.\n";
	}
};

class Circle : public Shape
{
public:
	int radius;

	Circle() { }

	Circle(int x, int y, int radius) : Shape(x, y)
	{
		this->radius = radius;
	}

	virtual ~Circle()
	{
		cout << "Destroyer of Circle.\n";
	}

	virtual void draw()
	{
		cout << "Drawing a circle.\n";
	}
};

int main(void)
{
	// �߻� ��ü�� ���� ��ü ���� �Ұ�.
	//Shape s;

	// �߻� ��ü�� ���� ��ü(������) ���� ����.
	Shape* s = new Rectangle(0, 0, 1, 2);
	s->draw();
	delete s;

	Shape* sa[2];
	sa[0] = new Rectangle;
	sa[1] = new Circle;
	for (int i = 0; i < 2; i++)
		sa[i]->draw();
	for (int i = 0; i < 2; i++)
		delete sa[i];

	return 0;
}

#endif