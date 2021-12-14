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

	// �θ� ��ü�� �ڽ� ��ü�� ������ �� �����Ƿ� �ڽ� ��ü�� �μ��� ���� �� �ִ�.
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
	// virtual �Լ��� �̿��� ������ ������ Shape�� ������ �迭�� �̿��� �ٷ� �� �ִ�.
	Shape* array[4];
	array[0] = new Shape;
	array[1] = new Rectangle;
	array[2] = new Circle;
	array[3] = new Triangle;

	for (int i = 0; i < 4; i++)
		array[i]->draw();

	cout << "\n";

	// �ֻ��� ��ü�� Shape Ŭ������ ���� ��ü�� �����͸� �μ��� �Ѱ��� �� �ִ�.
	for (int i = 0; i < 4; i++)
		array[0]->test(array[i]);

	cout << "\n";

	// �Ҹ��ڸ� virtual�� �����Ͽ� �ڽ� ��ü�� �޸𸮸� ��ȯ�� �� �ֵ��� �Ѵ�.
	for (int i = 0; i < 4; i++)
		delete array[i];
	
	return 0;
}

#endif
