/*
	2020-03-18 C++ Practice
	setw == ����� �ʺ� ����, cout��ü���� ���.
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
		cout << setw(7) << n * (8 - i);	//%7d�� ���� ������ ��.
		cout << '\n';
		n *= 10;
	}
}