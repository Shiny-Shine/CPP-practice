// 2021-02-27 BOJ - 15990(1, 2, 3 더하기 5)
#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

long long d[100001][4];
int mod = 1000000009;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	// 예외 체크
	d[1][1] = 1;
	d[2][2] = 1;
	d[3][1] = 1;
	d[3][2] = 1;
	d[3][3] = 1;

	for (int i = 4; i <= 100000; i++)
	{
		d[i][1] = (d[i - 1][2] + d[i - 1][3]) % mod;
		d[i][2] = (d[i - 2][1] + d[i - 2][3]) % mod;
		d[i][3] = (d[i - 3][1] + d[i - 3][2]) % mod;
	}

	while (t--)
	{
		int n;
		cin >> n;
		cout << ((d[n][1] + d[n][2]) % mod + d[n][3]) % mod << '\n';
	}
}
