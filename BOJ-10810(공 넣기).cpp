//2019-11-25 BOJ-10810(�� �ֱ�)
//�Է��� ���� ������ ���� ���ذ� �������.
#include <iostream>
using namespace std;

int main()
{
	int basket[101] = { 0 };
	int n, m;
	cin >> n >> m;

	for (int a = 0; a < m; a++)
	{
		int i, j, k;
		cin >> i >> j >> k;
		for (int b = i; b <= j; b++)
		{
			basket[b] = k;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		cout << basket[i] << ' ';
	}

}