/*
	2020-03-23 C++ Practice

	auto 자료형

	변수는 값이 할당되는 공간이고, 변수 타입에 따라 공간의 크기를 정하는데,
	auto는 그 공간의 크기를 "자동" 으로 정하겠다는 의미이다.
	따라서, auto로 선언되는 변수는 반드시 값의 초기화가 이루어져야 한다.

	Visual Studio에서는 이걸 잡아주는지 오버플로가 일어나지 않는다.
*/

#include <iostream>
using namespace std;

int main()
{
	//auto a, b; 초기화가 없어 불가능.

	int a1 = 217483647;
	auto a2 = 217483647;	//int 가 된다.
	cout << "a1 + 1 = " << (a1 + 100) << '\n';	//Overflow
	cout << "a2 + 1 = " << (a2 + 100) << '\n';	//Overflow

	int b1 = 217483647LL;
	auto b2 = 217483647LL;	//long long이 된다.
	cout << "b1 + 1 = " << (b1 + 100) << '\n';	//Overflow
	cout << "b2 + 1 = " << (b2 + 100) << '\n';

	int c[10]{ 0 };
	auto pc = c;	//int* 가 된다.(배열c를 가리킴)
	for (int i = 0; i < 10; i++)* (pc + i) = i;
	for (int i = 0; i < 10; i++) cout << c[i] << ' ';
}