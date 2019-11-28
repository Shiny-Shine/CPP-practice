//2019-11-28 BOJ-1978(소수 찾기)
//오랜만에 수학 문제라 많이 서툴럿다, 알고리즘은 문제가 없으나
//별 이상한 오류를 30분씩이나 잡았다. 에라토스테네스의 체를 사용했다.
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main()
{
	int n, cnt = 0;
	char sieve[1001];
	memset(sieve, 1, sizeof(sieve));
	cin >> n;

	sieve[0] = 0;
	sieve[1] = 0;
	vector<int> v(n);
	for (int i = 0; i < n; i++)	cin >> v[i];

	for (int i = 2; i <= sqrt(1000); i++)
	{
		if (sieve[i] == 0)	continue;
		for (int j = i + i; j <= 1000; j += i)	sieve[j] = 0;
	}

	for (int i = 0; i < n; i++)
		if (sieve[v[i]] != 0)	cnt++;
	cout << cnt << '\n';
}