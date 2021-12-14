//#define W207

#ifdef W207

#include <iostream>

using namespace std;

class Test
{
	int num;
	const int SIZE = 100;

public:
	// cosnt 맴버 변수를 초기화 리스트를 이용해 초기화할 수 있다.
	Test() : num(0), SIZE(10) { }

	// const 함수에서 객체 멤버 변수 변경 불가.
	//void sub1() const
	//{
	//	num = 50;
	//}

	// const 객체의 맴버 변수 변경 불가.
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