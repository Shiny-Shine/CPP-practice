/*
	2020-03-18 C++ Practice
	setw == 출력의 너비를 지정, cout객체에서 사용.
*/

#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
	int n = 1;
	for (int i = 1; i <= 7; i++)
	{
		printf("%7d, ", n * i);
		cout << setw(7) << n * (8 - i);	//%7d랑 같은 역할을 함.
		cout << '\n';
		n *= 10;
	}
}