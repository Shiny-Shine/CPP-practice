// 2020-01-20 14(뒤집은 소수)
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
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
	vector<int> prime = Eratos(100001);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int num = 0;
		string s;
		cin >> s;

		reverse(s.begin(), s.end());
		for (auto j : s)
		{
			if (num == 0 && j == '0')	continue;
			num = 10 * num + int(j - '0');
		}
		
		if (prime[num] == 1)	cout << num << '\n';
	}
}