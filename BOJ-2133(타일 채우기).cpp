//2019-12-30 BOJ-2133(타일 채우기)
//주석은 파이썬 코드를 확인.
#include <iostream>
using namespace std;

int d[31];

int dp(int n)
{
	if (n == 0)	return 1;
	if (n == 1)	return 0;
	if (n == 2)	return 3;
	if (d[n] != 0)	return d[n];
	int result = 3 * dp(n - 2);
	for (int i = 3; i <= n; i++)
	{
		if (i % 2 == 0)	result += 2 * dp(n - i);
	}
	d[n] = result;
	return d[n];
}

int main()
{
	int num;
	cin >> num;
	cout << dp(num);
}
