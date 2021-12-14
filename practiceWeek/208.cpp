//#define W208

#ifdef W208

#include <iostream>

using namespace std;

class PrivateClass
{
	int i;

	// 함수 goo(PrivateClass &p)와 클래스 FriendClass를 프렌드로 정의하여 해당 함수 및 클래스에서 PrivateClass의 모든 맴버에 접근할 수 있다.
	friend void goo(PrivateClass& p);
	friend class FriendClass;

public:
	PrivateClass(int i)
	{
		this->i = i;
	}
};

class FriendClass
{
	PrivateClass p;

public:
	FriendClass(int i) : p(PrivateClass(i)) { }

	void foo()
	{
		//FriendClass가 p의 프렌드 클래스이므로 p.i에 접근 가능하다.
		cout << p.i;
	}
};

int main(void)
{
	PrivateClass p(10);
	goo(p);

	cout << endl;

	FriendClass f(20);
	f.foo();

	return 0;
}

void goo(PrivateClass &p)
{
	// goo가 p의 프렌드 함수이므로 p.i에 접근 가능하다.
	cout << p.i;
}

#endif