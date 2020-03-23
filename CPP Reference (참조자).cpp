/*
	2020-03-23 C++ Practice

	Reference(참조자, &)
	참조자란 임의의 변수에 대해 다른 이름을 만들 수 있도록 한다.(별명, 같은 공간 다른 이름)
	이름 앞에 &를 붙여 선언한다.   참조의 대상을 바꾸는것도 불가능.()

	변수에 대해서만 선언이 가능.		int & num = 100;	(X)
	NULL 초기화 불가.					int & num = NULL	(X, 포인터 변수가 아님)
	선언과 동시에 뭔가를 참조해야만함.	int & num;			(X, 반드시 공간, 변수명이 와야함)
*/

#include <iostream>
using namespace std;

int main()
{
	int num1 = 10;
	int& num2 = num1;
	num2 = 20;
	cout << num1 << ',' << num2 << '\n';

	int* num3 = &num1;	// num3 는 포인터변수이다.
						// 값 변수에 참조자 & 를 붙여 값 변수의 메모리 주소를 할당할수 있음.
	*num3 = 30;
	cout << num1 << ',' << num2 << ',' << *num3 << '\n';
	cout << &num1 << ',' << &num2 << ',' << num3 << '\n';
}