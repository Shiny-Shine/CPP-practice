// 2021-03-04 BOJ-1912(연속합)
#include <iostream>
#include <algorithm>
using namespace std;

int a[100001];
int d[100001];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, sum = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> a[i];

	d[0] = a[0];
	sum = a[0];

	for (int i = 1; i < n; i++)
	{
		d[i] = max(d[i - 1] + a[i], a[i]);
		if (d[i] > sum)	sum = d[i];
	}

	cout << sum;
}
