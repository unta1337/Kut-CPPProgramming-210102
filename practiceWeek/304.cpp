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
	
	// �θ� ��ü �����ͷ� �ڽ� ��ü�� �����ϸ� ��ü �Ҹ� �ÿ� �ڽ� �Ҹ��ڸ� ȣ������ �ʴ´�.
	// �Ҹ��ڸ� virtual�� �����Ͽ� �Ҹ��ڸ� ȣ���Ͽ� �޸𸮸� ��ȯ�� �� �ֵ��� �Ѵ�.

	return 0;
}

#endif