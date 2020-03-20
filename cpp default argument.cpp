/*
	2020-03-20 C++ Practice

	default argumernt(기본 매개 변수)

	함수에 매개변수를 구성할 때, 기본값을 미리 지정해 놓을 수 있다.
	default 값이 구성되어 있다면 함수 호출 시 해당 매개변수에 값이 전달되지 않으면
	default로 설정된 값을 사용해 처리.
*/

#include <iostream>
using namespace std;

int sum1(int a = 10, int b = 20)
{
	return a + b;
}

int sum2(int a, int b = 10, int c = 20)
{
	return a + b + c;
}

int sum3(int a = 10, int b = 20, int c = 30, int d = 40);

int main()
{
	cout << "sum1 = " << sum1() << '\n';
	cout << "sum1 = " << sum1(50, 50) << '\n';

	cout << "sum2 = " << sum2(10) << '\n';
	cout << "sum2 = " << sum2(100, 200) << '\n';

	cout << "sum3 = " << sum3() << '\n';
}

//함수 구현부에서는 default 값을 설정할 필요가 없다.
int sum3(int a, int b, int c, int d)
{
	return a + b + c + d;
}