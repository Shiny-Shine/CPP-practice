/*
	2020-03-25 C++ Practice

	Extended Struct 3

	�Լ� ����ο� �����θ� �����ؼ� ������ �� �ִ�.

	�Լ� �����ο��� �Ҽ��� ǥ���ϴ� ����� �ݷ� 2��(::) �� ����Ѵ�.
*/

#include <iostream>
using namespace std;

struct Person
{
	char name[10];
	int age;
	int height;

	void info();
	void growup();
};

void Person::info()
{
	cout << name << ", " << age << ", " << height << "\n";
}

void Person::growup()
{
	cout << name << " growup >> ";
	age++;
	height += 2;
	info();
}

int main(void)
{
	Person p1 = { "Steve", 50, 180 };
	p1.info();
	p1.growup();

	Person p2 = { "Bill", 45, 175 };
	p2.info();
	p2.growup();
}