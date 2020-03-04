// 2020-01-20 14(소수의 개수)
#include <iostream>
#include <vector>
using namespace std;

vector<int> Eratos(int max)
{
	vector<int> sieve(max + 1, 1);
	sieve[1] = 0;

	for (int i = 2; i <= sqrt(max); i++)
	{
		if (sieve[i] == 0)	continue;
		for (int j = i + i; j <= max; j += i)	sieve[j] = 0;
	}

	return sieve;
}

int main()
{
	vector<int> prime = Eratos(200001);

	int n, cnt = 0;
	cin >> n;

	for (int i = 2; i <= n; i++)
	{
		if (prime[i] == 1)	cnt++;
	}
	cout << cnt;
}