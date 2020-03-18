/*
	2020-03-18 C++ Practice

	std::setprecision(n)
	실수의 출력 자리수를 지정한다.(소수점 n째 자리에서 반올림)
*/
#include <iostream>	//cout
#include <cstdio>	//printf
#include <iomanip>	//setprecision
using namespace std;

int main()
{
	double f = 1.2345678;
	for (int i = 1; i <= 7; i++)
	{
		printf("%0.*f, ", i, f);
		cout << setprecision(i + 1) << f << '\n';
	}
}