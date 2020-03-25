/*
	2020-03-25 C++ Practice

	Extended Struct 2
	
	C++에서는 구조체 내에서 함수를  구설 할 수 있다.
	구조체에서 구성된 변수 : 멤버 변수
	구조체에서 구성된 함수 : 멤버 함수

	멤버 함수에서는 멤버 변수를 쉽게 접근할 수 있다.
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