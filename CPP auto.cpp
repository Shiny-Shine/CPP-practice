/*
	2020-03-23 C++ Practice

	auto �ڷ���

	������ ���� �Ҵ�Ǵ� �����̰�, ���� Ÿ�Կ� ���� ������ ũ�⸦ ���ϴµ�,
	auto�� �� ������ ũ�⸦ "�ڵ�" ���� ���ϰڴٴ� �ǹ��̴�.
	����, auto�� ����Ǵ� ������ �ݵ�� ���� �ʱ�ȭ�� �̷������ �Ѵ�.

	Visual Studio������ �̰� ����ִ��� �����÷ΰ� �Ͼ�� �ʴ´�.
*/

#include <iostream>
using namespace std;

int main()
{
	//auto a, b; �ʱ�ȭ�� ���� �Ұ���.

	int a1 = 217483647;
	auto a2 = 217483647;	//int �� �ȴ�.
	cout << "a1 + 1 = " << (a1 + 100) << '\n';	//Overflow
	cout << "a2 + 1 = " << (a2 + 100) << '\n';	//Overflow

	int b1 = 217483647LL;
	auto b2 = 217483647LL;	//long long�� �ȴ�.
	cout << "b1 + 1 = " << (b1 + 100) << '\n';	//Overflow
	cout << "b2 + 1 = " << (b2 + 100) << '\n';

	int c[10]{ 0 };
	auto pc = c;	//int* �� �ȴ�.(�迭c�� ����Ŵ)
	for (int i = 0; i < 10; i++)* (pc + i) = i;
	for (int i = 0; i < 10; i++) cout << c[i] << ' ';
}