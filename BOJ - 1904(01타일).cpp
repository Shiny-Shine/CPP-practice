/*
	2021-02-13 BOJ - 1904(01타일)
*/
#include <iostream>
#include <algorithm>
using namespace std;

long long d0[1000001];

int main()
{
	int n;
	cin >> n;

	d0[1] = 1;
	d0[2] = 2;

	for (int i = 3; i <= n; i++)
	{
		d0[i] = (d0[i - 1] + d0[i - 2]) % 15746;
	}

	cout << d0[n];
}
