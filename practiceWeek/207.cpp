//#define W207

#ifdef W207

#include <iostream>

using namespace std;

class Test
{
	int num;
	const int SIZE = 100;

public:
	// cosnt �ɹ� ������ �ʱ�ȭ ����Ʈ�� �̿��� �ʱ�ȭ�� �� �ִ�.
	Test() : num(0), SIZE(10) { }

	// const �Լ����� ��ü ��� ���� ���� �Ұ�.
	//void sub1() const
	//{
	//	num = 50;
	//}

	// const ��ü�� �ɹ� ���� ���� �Ұ�.
	//void sub2(const Test &t)
	//{
	//	t.num = 50;
	//}

	void print()
	{
		cout << num << ", " << SIZE << endl;
	}

	void setNum(int n)
	{
		num = n;
	}
};

int main(void)
{
	Test t;
	t.print();

	return 0;
}

#endif