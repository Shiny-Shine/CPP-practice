//2019-11-28 BOJ-1929(소수 구하기)
//에라토스테네스의 체를 구현하면 된다. 또 인덱스랑 == 때문에...삽질
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
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
	int m, n;
	cin >> m >> n;
	vector<int> prime(n + 1, 1);
	prime[1] = 0;

	for (int i = 2; i <= sqrt(n); i++)
	{
		if (prime[i] == 0)	continue;
		for (int j = i + i; j <= n; j += i)	prime[j] = 0;
	}

	for (int i = m; i <= n; i++)
		if (prime[i] != 0)	cout << i << '\n';
}