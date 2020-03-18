/*
	2020-03-18 C++ Practice
	setfill == 출력 양식 지정, 공백을 특정 문자로 채움
	printf 함수의 %07d == setfill(0)
*/

#include <iostream>	//cout
#include <cstdio>	//printf
#include <iomanip>	//setw, setfill
using namespace std;

int main()
{
	int n = 7654321;
	while (n)
	{
		printf("%07d, ", n);
		//setfill에는 "문자로" 넣어줘야함.
		cout << setfill('0') << setw(7) << n << '\n';
		n /= 10;
	}
}