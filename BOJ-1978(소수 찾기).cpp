//2019-11-28 BOJ-1978(�Ҽ� ã��)
//�������� ���� ������ ���� ��������, �˰����� ������ ������
//�� �̻��� ������ 30�о��̳� ��Ҵ�. �����佺�׳׽��� ü�� ����ߴ�.
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