// Note: 연산자 오버로딩 시에는 연산자의 교환법칙, 분배법칙 등 준수해야 하는 법칙들을 고려해야 한다.
// e.g. v1 = v2 = v3에서 =의 반환형이 적절히 정의되지 안으면 v1 = (v2 = v3)에서 v1과 (v2 = v3) 간의 = 연산자가 잘 정의되지 않는다.

//#define W209

#ifdef W209

#include <iostream>

using namespace std;

class Vector2D
{
	int x, y;

public:
	Vector2D()
	{
		x = 0;
		y = 0;
	}

	Vector2D(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	void print()
	{
		cout << "(" << x << ", " << y << ")" << endl;
	}

	Vector2D operator+(Vector2D &v)
	{
		Vector2D *result = new Vector2D(this->x + v.x, this->y + v.y);
		return *result;
	}
};

int main(void)
{
	Vector2D v1(1, 2);
	Vector2D v2(2, 4);

	Vector2D v3 = v1 + v2;
	
	v1.print();
	v2.print();
	v3.print();

	return 0;
}

#endif