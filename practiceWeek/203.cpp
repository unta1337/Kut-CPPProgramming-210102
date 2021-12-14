//#define W203

#ifdef W203

#include <iostream>

class Point
{
	int x, y;

public:
	Point()
	{
		x = y = 0;
	}

	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	void setX(int x)
	{
		this->x = x;
	}

	void setY(int y)
	{
		this->y = y;
	}
};

int main(void)
{
	//Point p1 = new Point(100, 200);
	Point p1(100, 200);

	//Point p2;
	Point p2;

	//p2->setX(30);
	p2.setX(30);

	//p2->setY(60);
	p2.setY(60);

	//delete p2;
	// 불가능, p2가 포인터여야 함.

	//Point* p3 = new Point();
	Point* p3 = new Point();
	// 디폴트 생성자가 있으면 가능.

	//p3.setY(50);
	p3->setY(50);
	// p3가 포인터이므로 -> 연산자 사용.

	//*p3->setY(50);
	(*p3).setY(50);
	// 연산자 우선순위를 고려하여야 한다.
	// (*p3)는 객체 포인터가 아닌 객체이므로 . 연산자를 사용해야 한다.

	return 0;
}

#endif