// Note: ������ �����ε� �ÿ��� �������� ��ȯ��Ģ, �й��Ģ �� �ؼ��ؾ� �ϴ� ��Ģ���� ����ؾ� �Ѵ�.
// e.g. v1 = v2 = v3���� =�� ��ȯ���� ������ ���ǵ��� ������ v1 = (v2 = v3)���� v1�� (v2 = v3) ���� = �����ڰ� �� ���ǵ��� �ʴ´�.

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