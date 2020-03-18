/*
	2020-03-18 C++ Practice

	std::setprecision(n)
	�Ǽ��� ��� �ڸ����� �����Ѵ�.(�Ҽ��� n° �ڸ����� �ݿø�)
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