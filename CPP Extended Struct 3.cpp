/*
	2020-03-25 C++ Practice

	Extended Struct 3

	함수 선언부와 구현부를 구분해서 구성할 수 있다.

	함수 구현부에는 소속을 표현하는 방식인 콜론 2개(::) 를 사용한다.
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