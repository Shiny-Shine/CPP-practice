/*
	2020-03-20 C++ Practice
	
	함수 오버로딩

	매개변수가 다르지만, 이름이 같은 함수들을 만들 수 있는 기능이 함수 오버로딩이다.
	이름, 매개변수가 같고 리턴타입이 같은 경우에는 오버로딩이 아니라서 오류가 발생한다.

	리턴타입만 다르게 오버로딩 하고싶다면 리턴타입을 
	void 로 놓고 반환 값을 호출자에게 out 참조 매개 변수로 전달하도록 하는 방법이 있다.

	void getRandomValue(int& out);
	void getRandomValue(double& out);
	이러한 함수에는 다른 매개 변수가 있으므로 고유한 것으로 간주된다.

*/

#include <iostream>
using namespace std;

void print(int a)
{
	cout << "varible type is int. value is " << a << '\n';
}

void print(double a)
{
	cout << "varible type is double. value is " << a << '\n';
}

void print(long long a)
{
	cout << "varible type is long. value is " << a << '\n';
}

int main()
{
	//	print 라는 코드는 유지되지만, 전달되는 인자값에 따라 다른 함수들이 호출된다.
	print(10);
	print(3.14);
	print(3000000000);
}