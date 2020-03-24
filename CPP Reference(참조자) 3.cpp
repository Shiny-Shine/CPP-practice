/*
	2020-03-24 C++ Practice

	Reference(������, &) 3

	'AddValue' �Լ��� ȣ���ϸ� ������ ���� ����ȴ�.
	int & ref = v1;
	�׸��� �� �Լ��� ����� �� int& v2 = ref�� ��ȯ�Ѵ�.
	
	�ᱹ�� �ϳ��� ������ ���� �̸��� 3���� ���̴�.
	v1, ref, v2 ��� �ϳ��� ������ �ٸ� �̸��̴�.
*/

#include <iostream>
using namespace std;

int& AddValue(int& ref)
{
	ref += 10;
	return ref;
}

int main(void)
{
	int v1 = 10;
	int& v2 = AddValue(v1);
	cout << v1 << ',' << v2 << '\n';

	v1 += 10;
	v2 += 10;
	cout << v1 << ',' << v2 << '\n';
}