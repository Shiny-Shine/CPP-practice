/*
	2020-03-18 C++ Practice
	using = 특정 namespace, 혹은 namespace 함수를  특정 영역에서 사용하겟다고 명시
	using으로 구성된 namespace 혹은 namespace함수는 이후 코드에서 소속을 명시하지 않아도 무방.
*/

#include <iostream>

//글로벌에 선언하면 범위가 코드 전체로 확장
using std::cin;
using namespace std;

namespace Name1
{
	int v1;
	void printvalue(int v);
}

int main()
{
	using Name1::printvalue;	//main 함수 내에서만 적용(블럭)
	printvalue(100);
	printvalue(200);
}

void Name1::printvalue(int v)
{
	using std::cout;	//printvelue 함수 내에서만 작동됨.
	cout << "using exanple" << '\n';
	cout << "value is" << v << '\n';
}