//#define W303

#ifdef W303

#include <iostream>

using namespace std;

class Shape
{
public:
	virtual ~Shape()
	{
		cout << "Destroyer of Shape.\n";
	}

	virtual void draw()
	{
		cout << "Drawing a shape.\n";
	}

	// 부모 객체는 자식 객체를 참조할 수 있으므로 자식 객체를 인수로 받을 수 있다.
	void test(Shape* s)
	{
		s->draw();
	}
};

class Rectangle : public Shape
{
public:
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
	virtual ~Circle()
	{
		cout << "Destroyer of Ciecle.\n";
	}

	virtual void draw()
	{
		cout << "Drawing a circle.\n";
	}
};

class Triangle : public Shape
{
public:
	virtual ~Triangle()
	{
		cout << "Destroyer of Triangle.\n";
	}

	virtual void draw()
	{
		cout << "Drawing a triangle.\n";
	}
};

int main(void)
{
	// virtual 함수를 이용해 각각의 도형을 Shape의 포인터 배열을 이용해 다룰 수 있다.
	Shape* array[4];
	array[0] = new Shape;
	array[1] = new Rectangle;
	array[2] = new Circle;
	array[3] = new Triangle;

	for (int i = 0; i < 4; i++)
		array[i]->draw();

	cout << "\n";

	// 최상위 객체인 Shape 클래스에 하위 객체의 포인터를 인수로 넘겨줄 수 있다.
	for (int i = 0; i < 4; i++)
		array[0]->test(array[i]);

	cout << "\n";

	// 소멸자를 virtual로 선언하여 자식 객체가 메모리를 반환할 수 있도록 한다.
	for (int i = 0; i < 4; i++)
		delete array[i];
	
	return 0;
}

#endif
