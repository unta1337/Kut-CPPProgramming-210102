//#define W302

#ifdef W302

#include <iostream>

using namespace std;

class Shape
{
public:
	int x, y;

	// draw() 함수를 virtual로 정의하면 자식 클래스에서 재정의되는 draw() 함수도 virtual 함수가 된다.
	virtual void draw()
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

	// 부모 객체에서 draw()를 virtual로 선언했으므로 자식 객체의 draw()도 virtual 함수가 된다.
	// 부모 객체에서 virtual 선언했으면 접두사를 꼭 붙여주도록 하자.
	virtual void draw()
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
	Rectangle temp;
	Shape& s = temp;

	cout << "Using a Shape's reference.\n";
	s.setOrigin(0, 0);
	s.draw();		// Shape의 darw()는 virtual function으로 선언되었다; ps가 가리키는 것이 Rectangle이므로 Rectangle의 draw()를 호출한다.
	s.print();
	cout << "\n";

	cout << "Using a Rectangle's reference.\n";
	((Rectangle*)&s)->setWidth(5);
	((Rectangle*)&s)->setHeight(6);
	((Rectangle*)&s)->draw();		// Shape의 darw()는 virtual function으로 선언되었다.
	((Rectangle*)&s)->print();
	cout << "\n";

	// 부모 클래스에서 어떤 함수를 virtual로 선언하면,
	// 별도의 형변환 없이 부모 객체 포인터를 통해 자식 객체의 함수에 접근할 수 있다.

	// 정적 할당된 포인터 및 동적 할당된 포인터뿐 아니라,
	// 레퍼런스 변수를 이용해서도 위와 같은 동작을 수행할 수 있다.

	// 일반 변수에서도 부모 객체에 자식 객체를 할당할 수 있다.
	Rectangle r;
	Shape sh = r;
	sh.draw();

	// 포인터 또는 레퍼런스가 아닌 정적 객체로 대입한 변수에서는 virtual 함수가 동작하지 않는다.
	// 즉, 일반 변수에서는 다형성이 동작하지 않는다.

	return 0;
}

#endif