/*
	2020-03-18 C++ Practice
*/

#include <iostream>

namespace Name1
{
	int v1;
	void func();
	void change();
}

namespace Name2
{
	void func();
}

int main()
{
	Name1::v1 = 100;
	Name1::change();
}

void Name1::func()
{
	std::cout << "Name1 FunC Call;" << '\n';
}

void Name1::change()
{
	func();	//���� namespace �Ҽ��� ��/�Լ��� �����Ҷ� �Ҽ��� �����ص� �����ϴ�.
	Name2::func();	//������ �ٸ� �Ҽ� �Լ��� �����Ҷ� �翬�� �Ҽ��� �������Ѵ�.
	v1 = 200;
	std::cout << "v1 = " << v1 << '\n';
}

void Name2::func()
{
	std::cout << "Name2 FunC Call;" << '\n';
}