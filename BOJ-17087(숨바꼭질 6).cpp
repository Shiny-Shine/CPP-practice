/*
	2021-02-20 BOJ - 17087(숨바꼭질 6)
*/
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int GCD(int a, int  b)
{
	while (b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	long long n, s, ans;
	cin >> n >> s;
	long long* arr = new long long[n + 1];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		arr[i] = abs(arr[i] - s);
	}

	if (n == 1)
	{
		cout << arr[0];
		return 0;
	}

	ans = GCD(arr[0], arr[1]);
	for (int i = 2; i < n; i++)
	{
		ans = GCD(ans, arr[i]);
	}

	cout << ans;
}
