/*
	2020-03-23 C++ Practice

	Range-based-for
	
	������ ��ü ������ Ž���ϴ� for-loop�ݺ����̴�.
	�Ϲ� for-loop������ ���ǿ����� �־� �ݺ� ������ ������ �� �ִ�.
	������, "Range-based-for"�ݺ����� �ݺ� ������ ���Ƿ� ������ �� ����.
	������ �ݷ���(�迭 ��)�� ���۵Ǵ� �ּҰ��� ������ �ָ� �ش� �ּҷ� ����
	�ݷ������� ���� �ִ� '��� �����͸� ���������� Ž���Ѵ�' �迭 �� ���
	��ü �����͸� ���������� Ž���ϴ� ���̴�.

	��뼺�� �ſ� ����.
	Java������ �״��, C#���� 'foreach' ��������, Python ���� �ణ�� ������������ ����.

	auto ����Ÿ���� �����ϰ� ����.
*/

#include <iostream>
using namespace std;

int main()
{
	int aa[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 ,10 };
	int sum = 0;

	for (int x : aa)	// a �ּҷ� ���� ��� �����͸� �ϳ��� ������ ���� x �� �����鼭 �����ȴ�.
	{
		cout << x << ',';
		sum += x;
	}
	cout << "\nsum = " << sum << '\n';

	cout << '\n';

	char a[] = "school";
	// a�� �ּҷ� ���� ���� �����Ͱ� �ִ�.
	// ['s', 'c', 'h', 'o', 'o', 'l', '\0']
	char b[10] = "test";
	// b�� �ּҷ� ���� ���� �����Ͱ� �ִ�.
	// ['t', 'e', 's', 't', 0 ,0 ,0 ,0 ,0 ,0]
	int c[5] = {};
	// c�� �ּҷ� ���� ���� �����Ͱ� �ִ�.
	// [0, 0 ,0, 0, 0]

	int length = 0;
	for (auto x : a)	length++;
	cout << "length = " << length << '\n';

	length = 0;
	for (auto x : b)	length++;
	cout << "length = " << length << '\n';

	length = 0;
	for (auto x : c)	length++;
	cout << "length = " << length << '\n';
}