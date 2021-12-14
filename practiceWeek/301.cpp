//#define W301

#ifdef W301

#include <iostream>

using namespace std;

class Shape
{
public:
	int x, y;

	void draw()
	{
		cout << "Drawing a shape.\n";
	}

	void setOrigin(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	void print()
	{
		cout << "(" << x << ", " << y << ")\n";
	}
};

class Rectangle : public Shape
{
public:
	typedef Shape super;

	int width, height;

	void setWidth(int width)
	{
		this->width = width;
	}

	void setHeight(int height)
	{
		this->height = height;
	}

	void draw()
	{
		cout << "Drawing a rectangle.\n";
	}

	void print()
	{
		super::print();
		cout << "(" << width << ", " << height << ")\n";
	}
};

int main(void)
{
	// ���� ����ȯ: �θ� Ŭ������ �����ʹ� �ڽ� Ŭ������ ������ �� �ִ�.
	Shape* ps = new Rectangle();

	cout << "Using a Shape's pointer.\n";
	ps->setOrigin(0, 0);
	ps->draw();
	ps->print();
	cout << "\n";

	// ���� ����ȯ�� ���� �ڽ� ��ü�� ������ ������ �� �ֵ��� �Ѵ�.
	cout << "Using a Rectangle's pointer.\n";
	((Rectangle*)ps)->setWidth(5);
	((Rectangle*)ps)->setHeight(6);
	((Rectangle*)ps)->draw();
	((Rectangle*)ps)->print();

	// �θ� ��ü�� �����Ϳ� �ڽ� ��ü�� �Ҵ��� �� ������,
	// �ڽ� ��ü�� �����Ϳ� �θ� ��ü�� �Ҵ��� �� ����.

	return 0;
}

#endif