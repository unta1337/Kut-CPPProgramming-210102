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
	// �Ұ���, p2�� �����Ϳ��� ��.

	//Point* p3 = new Point();
	Point* p3 = new Point();
	// ����Ʈ �����ڰ� ������ ����.

	//p3.setY(50);
	p3->setY(50);
	// p3�� �������̹Ƿ� -> ������ ���.

	//*p3->setY(50);
	(*p3).setY(50);
	// ������ �켱������ ����Ͽ��� �Ѵ�.
	// (*p3)�� ��ü �����Ͱ� �ƴ� ��ü�̹Ƿ� . �����ڸ� ����ؾ� �Ѵ�.

	return 0;
}

#endif