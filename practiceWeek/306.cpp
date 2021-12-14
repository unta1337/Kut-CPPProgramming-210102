//#define W306

#ifdef W306

#include <iostream>

using namespace std;

// ���� ���� �Լ������� �����Ͽ� interface�� ����.
class remoteContoller
{
public:
	virtual void turnOn() = 0;
	virtual void turnOff() = 0;
};

class TV : public remoteContoller
{
public:
	virtual void turnOn()
	{
		cout << "Turn On.\n";
	}

	virtual void turnOff()
	{
		cout << "Turn Off.\n";
	}
};

int main(void)
{
	TV tv;
	tv.turnOn();
	tv.turnOff();

	return 0;
}

#endif