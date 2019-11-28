//2019-11-28 BOJ-2609(�ִ������� �ּҰ����)
//�ܼ��� �� ���� GCD, LCM�� ���ϸ� �ȴ�, 5���� ���� �غ��ϸ鼭
//��Ŭ���� ȣ������ �����غþ ���� Ǯ����.
#include <iostream>
using namespace std;

int GCD(int a, int b)
{
	while (b > 0)
	{
		int tmp = a;
		a = b;
		b = tmp % b;
	}
	return a;
}

int LCM(int a, int b)	{ return a * b / GCD(a, b); }

int main()
{
	int a, b;
	cin >> a >> b;

	cout << GCD(a, b) << ' ' << LCM(a, b) << '\n';

}