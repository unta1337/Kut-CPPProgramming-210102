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
	// 상향 형변환: 부모 클래스의 포인터는 자식 클래스를 참조할 수 있다.
	Shape* ps = new Rectangle();

	cout << "Using a Shape's pointer.\n";
	ps->setOrigin(0, 0);
	ps->draw();
	ps->print();
	cout << "\n";

	// 하향 형변환을 통해 자식 객체의 내용을 참조할 수 있도록 한다.
	cout << "Using a Rectangle's pointer.\n";
	((Rectangle*)ps)->setWidth(5);
	((Rectangle*)ps)->setHeight(6);
	((Rectangle*)ps)->draw();
	((Rectangle*)ps)->print();

	// 부모 객체의 포인터에 자식 객체를 할당할 수 있지만,
	// 자식 객체의 포인터에 부모 객체를 할당할 수 없다.

	return 0;
}

#endif