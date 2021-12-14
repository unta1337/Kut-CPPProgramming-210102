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

	// 순수 가상 함수(pure virtual function)가 하나라도 있다면 이 객체는 abstract class가 된다.
	// 추상 객체는 정적 객체를 생성할 수 없지만, 포인터 변수를 생성할 수는 있다.
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
	// 추상 객체의 정적 객체 생성 불가.
	//Shape s;

	// 추상 객체의 동적 객체(포인터) 생성 가능.
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