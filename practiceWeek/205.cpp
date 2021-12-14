//#define W205

#ifdef W205

#include <iostream>

using namespace std;

class Time
{
	int hour, minute, second;

public:
	Time()
	{
		hour = minute = second = 0;
	}

	Time(int h, int m, int s)
	{
		hour = h;
		minute = m;
		second = s;
	}

	void print()
	{
		cout << hour << ":" << minute << ":" << second << endl;
	}
};

class AlarmClock
{
	Time current, alarm;

public:
	AlarmClock(Time c, Time a) : current(c), alarm(a) { }

	void printCurrent()
	{
		current.print();
	}

	void printAlarm()
	{
		alarm.print();
	}
};

int main(void)
{
	Time current(10, 10, 30);
	Time alarm(22, 10, 30);

	AlarmClock alarmClock(current, alarm);

	alarmClock.printCurrent();
	alarmClock.printAlarm();

	return 0;
}

#endif