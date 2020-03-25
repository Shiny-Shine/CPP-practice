/*
	2020-03-25 C++ Practice

	Extended Struct 2
	
	C++������ ����ü ������ �Լ���  ���� �� �� �ִ�.
	����ü���� ������ ���� : ��� ����
	����ü���� ������ �Լ� : ��� �Լ�

	��� �Լ������� ��� ������ ���� ������ �� �ִ�.
*/

#include <iostream>
using namespace std;

struct Person
{
	char name[10];
	int age;
	int height;

	void info()
	{
		cout << name << ", " << age << ", " << height << "\n";
	}

	void growup()
	{
		cout << name << " growup >> ";
		age++;
		height += 2;
		info();
	}
};

int main(void)
{
	Person p1 = { "Steve", 50, 180 };
	p1.info();
	p1.growup();

	Person p2 = { "Bill", 45, 175 };
	p2.info();
	p2.growup();
}