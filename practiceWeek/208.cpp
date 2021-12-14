//#define W208

#ifdef W208

#include <iostream>

using namespace std;

class PrivateClass
{
	int i;

	// �Լ� goo(PrivateClass &p)�� Ŭ���� FriendClass�� ������� �����Ͽ� �ش� �Լ� �� Ŭ�������� PrivateClass�� ��� �ɹ��� ������ �� �ִ�.
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
		//FriendClass�� p�� ������ Ŭ�����̹Ƿ� p.i�� ���� �����ϴ�.
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
	// goo�� p�� ������ �Լ��̹Ƿ� p.i�� ���� �����ϴ�.
	cout << p.i;
}

#endif