/*
	2020-03-18 C++ Practice
	setfill == ��� ��� ����, ������ Ư�� ���ڷ� ä��
	printf �Լ��� %07d == setfill(0)
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
		//setfill���� "���ڷ�" �־������.
		cout << setfill('0') << setw(7) << n << '\n';
		n /= 10;
	}
}