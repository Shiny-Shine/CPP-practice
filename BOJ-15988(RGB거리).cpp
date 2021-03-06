// 2021-03-06 BOJ-15988(RGB거리)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a[1001][3];
int d[1001][3];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	int r, g, b;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> r >> g >> b;
		a[i][0] = r;
		a[i][1] = g;
		a[i][2] = b;
	}

	d[1][0] = a[1][0];
	d[1][1] = a[1][1];
	d[1][2] = a[1][2];
	for (int i = 2; i <= n; i++)
	{
		d[i][0] = min(d[i - 1][1], d[i - 1][2]) + a[i][0];
		d[i][1] = min(d[i - 1][0], d[i - 1][2]) + a[i][1];
		d[i][2] = min(d[i - 1][0], d[i - 1][1]) + a[i][2];
	}

	cout << min(min(d[n][0], d[n][1]), d[n][2]);
}
