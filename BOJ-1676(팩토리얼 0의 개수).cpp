//2019-12-02 BOJ-1676(���丮�� 0�� ����)
//���� ���ظ� ���ؼ� �����˻��� ���� ���ظ� �ߴµ�
//Ǯ���� �� �𸣰ٴ�... ��ͷ� 2, 5�� �������� ������ ���� ���� �� ���.
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int two, five;

void cnt(int n)
{
	if (n < 2)	return;
	cnt(n - 1);
	while (n % 2 == 0)
	{
		n /= 2;
		two++;
	}
	while (n % 5 == 0)
	{
		n /= 5;
		five++;
	}
}

int main()
{
	int n;
	cin >> n;
	cnt(n);
	if (five < two)	cout << five;
	else cout << two;
}