/*
	2020-03-20 C++ Practice

	default argumernt(�⺻ �Ű� ����)

	�Լ��� �Ű������� ������ ��, �⺻���� �̸� ������ ���� �� �ִ�.
	default ���� �����Ǿ� �ִٸ� �Լ� ȣ�� �� �ش� �Ű������� ���� ���޵��� ������
	default�� ������ ���� ����� ó��.
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

//�Լ� �����ο����� default ���� ������ �ʿ䰡 ����.
int sum3(int a, int b, int c, int d)
{
	return a + b + c + d;
}