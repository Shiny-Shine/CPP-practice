//2019-11-28 BOJ-9613(GCD ��)
//�迭�� ���� Ž���ϸ鼭 ��� ����� ���� GCD���� ���ϸ� �ȴ�.
//�迭 �ε����� ������ �ݺ��� ��(i, j��) �� �־ �����ߴ�.
#include <iostream>
#include <vector>
#include <algorithm>
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

int main()
{
	int t, n;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		long long int sum = 0;
		cin >> n;
		vector<int> v(n);

		for (int j = 0; j < n; j++)	cin >> v[j];

		for (int j = 0; j < n - 1; j++)
			for (int k = j + 1; k < n; k++)
				sum += GCD(v[j], v[k]);

		cout << sum << '\n';
	}
}