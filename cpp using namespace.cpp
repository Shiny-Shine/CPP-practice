/*
	2020-03-18 C++ Practice
	using = Ư�� namespace, Ȥ�� namespace �Լ���  Ư�� �������� ����ϰٴٰ� ���
	using���� ������ namespace Ȥ�� namespace�Լ��� ���� �ڵ忡�� �Ҽ��� ������� �ʾƵ� ����.
*/

#include <iostream>

//�۷ι��� �����ϸ� ������ �ڵ� ��ü�� Ȯ��
using std::cin;
using namespace std;

namespace Name1
{
	int v1;
	void printvalue(int v);
}

int main()
{
	using Name1::printvalue;	//main �Լ� �������� ����(��)
	printvalue(100);
	printvalue(200);
}

void Name1::printvalue(int v)
{
	using std::cout;	//printvelue �Լ� �������� �۵���.
	cout << "using exanple" << '\n';
	cout << "value is" << v << '\n';
}