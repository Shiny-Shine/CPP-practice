/*
	2020-03-25 C++ Practice

	Extended Struct
	C++ 구조체
	
	C++에서는 참조자를 구성할 수 있기 때문에 포인터를 전달하지 않고도
	보다 직관적으로 처리할 수 있다.
*/

#include <iostream>
using namespace std;

struct Person
{
	char name[10];
	int age;
	int height;
};

//	참조자를 통해 또다른 이름을 부여하는데,
//	상수화(const) 시켜 "읽기" 만을 허용하고 있다.
void info(const Person& p)
{
	cout << p.name << ", " << p.age << ", " << p.height << "\n";
}

//	참조자를 통해 다름 이름을 부여하고.
//	멤버 변수들의 수정도 가능하도록 하고 있다.
void growup(Person& p)
{
	cout << p.name << " growup >> ";
	p.age++;
	p.height += 2;
	info(p);
}

int main(void)
{
	Person p1 = { "Steve", 50, 180 };
	info(p1);
	growup(p1);

	Person p2 = { "Bill", 45, 175 };
	info(p2);
	growup(p2);
}