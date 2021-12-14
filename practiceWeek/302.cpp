//#define W302

#ifdef W302

#include <iostream>

using namespace std;

class Shape
{
public:
	int x, y;

	// draw() �Լ��� virtual�� �����ϸ� �ڽ� Ŭ�������� �����ǵǴ� draw() �Լ��� virtual �Լ��� �ȴ�.
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

	// �θ� ��ü���� draw()�� virtual�� ���������Ƿ� �ڽ� ��ü�� draw()�� virtual �Լ��� �ȴ�.
	// �θ� ��ü���� virtual ���������� ���λ縦 �� �ٿ��ֵ��� ����.
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
	s.draw();		// Shape�� darw()�� virtual function���� ����Ǿ���; ps�� ����Ű�� ���� Rectangle�̹Ƿ� Rectangle�� draw()�� ȣ���Ѵ�.
	s.print();
	cout << "\n";

	cout << "Using a Rectangle's reference.\n";
	((Rectangle*)&s)->setWidth(5);
	((Rectangle*)&s)->setHeight(6);
	((Rectangle*)&s)->draw();		// Shape�� darw()�� virtual function���� ����Ǿ���.
	((Rectangle*)&s)->print();
	cout << "\n";

	// �θ� Ŭ�������� � �Լ��� virtual�� �����ϸ�,
	// ������ ����ȯ ���� �θ� ��ü �����͸� ���� �ڽ� ��ü�� �Լ��� ������ �� �ִ�.

	// ���� �Ҵ�� ������ �� ���� �Ҵ�� �����ͻ� �ƴ϶�,
	// ���۷��� ������ �̿��ؼ��� ���� ���� ������ ������ �� �ִ�.

	// �Ϲ� ���������� �θ� ��ü�� �ڽ� ��ü�� �Ҵ��� �� �ִ�.
	Rectangle r;
	Shape sh = r;
	sh.draw();

	// ������ �Ǵ� ���۷����� �ƴ� ���� ��ü�� ������ ���������� virtual �Լ��� �������� �ʴ´�.
	// ��, �Ϲ� ���������� �������� �������� �ʴ´�.

	return 0;
}

#endif