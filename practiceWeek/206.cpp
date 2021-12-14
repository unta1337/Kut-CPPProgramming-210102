//#define W206

#ifdef W206

#include <iostream>

using namespace std;

class Company
{
	static int nEmployee;

public:
	static int getNEmployee()
	{
		return nEmployee;
	}

	static void setNEmployee(int n)
	{
		nEmployee = n;
	}
};
int Company::nEmployee = 0;

int main(void)
{
	Company com;
	cout << Company::getNEmployee() << endl;
	Company::setNEmployee(10);
	cout << Company::getNEmployee() << endl;

	return 0;
}

#endif