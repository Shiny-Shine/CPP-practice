// 2021-03-05 BOJ-1699(제곱수의 합)
#include <iostream>
#include <algorithm>
using namespace std;

int a[100001];
int d[100001];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	d[1] = 1;

	for (int i = 2; i <= n; i++)
	{
		d[i] = 100000;
		for (int j = 1; j * j <= i; j++)
		{
			d[i] = min(d[i], d[i - j * j] + 1);
		}
	}

	cout << d[n];
}
