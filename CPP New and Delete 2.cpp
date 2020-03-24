/*
	2020-03-24 C++ Practice

	New & Delete 2

	�迭�� ���� �Ҵ�
	�޸� ���� �Ҵ翡�� ������ �迭�� �Ҵ����� �����ϴ� �� ��ü�� ū �ǹ̰� ����.
	�׳� �޸�(Heap Zone)�� �ʿ��� ��ŭ�� ������ ������ ���̴�.
*/

#include <iostream>
using namespace std;


int main(void)
{
	int* pa = (int*)malloc(sizeof(int) * 5);
	for (int i = 0; i < 5; i++) *(pa + i) = 10 * i;

	int* pb = new int(20);
	for (int i = 0; i < 5; i++) *(pb + i) = 10 * i;

	for (int i = 0; i < 5; i++)	cout << pa[i] + pb[i] << '\n';
	printf("%p, %p\n", pa, pb);

	free(pa);		// Dangling Pointer �� ���� �ʵ���
	delete(pb);		// Null Pointer�� �ʱ�ȭ ��Ų��.

	pa = 0;
	pb = nullptr;
	printf("%p, %p\n", pa, pb);
}