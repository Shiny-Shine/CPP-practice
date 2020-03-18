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
	func();	//같은 namespace 소속의 변/함수를 구성할땐 소속을 생략해도 무방하다.
	Name2::func();	//하지만 다른 소속 함수를 구성할땐 당연히 소속을 밝혀야한다.
	v1 = 200;
	std::cout << "v1 = " << v1 << '\n';
}

void Name2::func()
{
	std::cout << "Name2 FunC Call;" << '\n';
}