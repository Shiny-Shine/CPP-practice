//2019-11-28 BOJ-1934(�ּҰ����)
//�ּҰ�������� �� ����ϸ� �Ǵ� ����, ��Ŭ���� ȣ���.
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

int LCM(int a, int b) { return a * b / GCD(a, b); }

int main()
{
	int a, b, t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		cout << LCM(a, b) << '\n';
	}

}