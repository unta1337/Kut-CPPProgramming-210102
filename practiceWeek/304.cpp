//#define W304

#ifdef W304

#include <iostream>

using namespace std;

class String
{
public:
	char* s;

	String(const char *p)
	{
		s = new char[strlen(p) + 1];
		strcpy_s(s, strlen(p) + 1, p);
		cout << s << endl;
	}

	virtual ~String()
	{
		cout << "String Destroyer.\n";
		delete[] s;
	}
};

class myString : public String
{
public:
	char* header;

	myString(const char* p, const char* h) : String(p)
	{
		header = new char[strlen(h) + 1];
		strcpy_s(header, strlen(h) + 1, h);
		cout << header << endl;
	}

	virtual ~myString()
	{
		cout << "myString Destroyer.\n";
		delete[] header;
	}
};

int main(void)
{
	String* s1 = new myString("string 1", "text1");
	delete s1;

	myString* s2 = new myString("string 2", "text2");
	delete s2;
	
	// 부모 객체 포인터로 자식 객체를 참조하면 객체 소멸 시에 자식 소멸자를 호출하지 않는다.
	// 소멸자를 virtual로 선언하여 소멸자를 호출하여 메모리를 반환할 수 있도록 한다.

	return 0;
}

#endif