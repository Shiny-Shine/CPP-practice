/*
	2020-03-18 C++ Practice

	#define �� �̿��� "��ũ�� �Լ�" �� ���� �� �ִ�.
	�Լ�ó�� ���̳� �ܼ��� "�ڵ��� ġȯ"���� ����ϵ��� �Ѵ�.

	�ڵ� ġȯ ���·� �۵��ϱ� ������, �ǵ�ġ ���� ����� ���� ���� �ִ�.
	�׷��� ��ũ�� �Լ��� ���� ���� ������ Ȯ���� ���� ��ȣ�� ���� ����Ѵ�.

	��ȣ�� ���� ������� �������� �������� ������ ������, "�ڵ� ġȯ"�̱⿡
	���� Ÿ�Կ����� ����� ���ص� �Ǵ� ������ �ִ�.
*/
#include <iostream>
#define SQUARE1(X) X*X
#define SQUARE2(X) ((X) * (X))
using namespace std;

int main()
{
	cout << "[Case 1]\n";
	cout << "square1 result = " << SQUARE1(10) << '\n';	//10*10 = 100
	cout << "square2 result = " << SQUARE2(10) << '\n';	//((10) * (10)) = 100

	int x = 1;
	cout << "[Case 2]\n";
	//	1 + 5 * 1 + 5 = 11
	cout << "square1 result = " << SQUARE1(x + 5) << '\n';
	//	((1 + 5) * (1 + 5)) = 36
	cout << "square1 result = " << SQUARE1(x + 5) << '\n';
}