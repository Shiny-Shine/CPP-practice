/*
	2020-03-20 C++ Practice
	
	�Լ� �����ε�

	�Ű������� �ٸ�����, �̸��� ���� �Լ����� ���� �� �ִ� ����� �Լ� �����ε��̴�.
	�̸�, �Ű������� ���� ����Ÿ���� ���� ��쿡�� �����ε��� �ƴ϶� ������ �߻��Ѵ�.

	����Ÿ�Ը� �ٸ��� �����ε� �ϰ�ʹٸ� ����Ÿ���� 
	void �� ���� ��ȯ ���� ȣ���ڿ��� out ���� �Ű� ������ �����ϵ��� �ϴ� ����� �ִ�.

	void getRandomValue(int& out);
	void getRandomValue(double& out);
	�̷��� �Լ����� �ٸ� �Ű� ������ �����Ƿ� ������ ������ ���ֵȴ�.

*/

#include <iostream>
using namespace std;

void print(int a)
{
	cout << "varible type is int. value is " << a << '\n';
}

void print(double a)
{
	cout << "varible type is double. value is " << a << '\n';
}

void print(long long a)
{
	cout << "varible type is long. value is " << a << '\n';
}

int main()
{
	//	print ��� �ڵ�� ����������, ���޵Ǵ� ���ڰ��� ���� �ٸ� �Լ����� ȣ��ȴ�.
	print(10);
	print(3.14);
	print(3000000000);
}