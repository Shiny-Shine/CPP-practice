/*
	2020-03-25 C++ Practice

	Extended Struct
	C++ ����ü
	
	C++������ �����ڸ� ������ �� �ֱ� ������ �����͸� �������� �ʰ�
	���� ���������� ó���� �� �ִ�.
*/

#include <iostream>
using namespace std;

struct Person
{
	char name[10];
	int age;
	int height;
};

//	�����ڸ� ���� �Ǵٸ� �̸��� �ο��ϴµ�,
//	���ȭ(const) ���� "�б�" ���� ����ϰ� �ִ�.
void info(const Person& p)
{
	cout << p.name << ", " << p.age << ", " << p.height << "\n";
}

//	�����ڸ� ���� �ٸ� �̸��� �ο��ϰ�.
//	��� �������� ������ �����ϵ��� �ϰ� �ִ�.
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