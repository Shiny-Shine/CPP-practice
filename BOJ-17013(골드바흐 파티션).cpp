// 2021-02-20 BOJ-17013(골드바흐 파티션)
#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

const int MAX = 1000000;
int prime[MAX];	// 소수 저장
int pn;			// 소수 개수
bool check[MAX + 1];// 지워졌으면 True

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	for (int i = 2; i <= MAX; i++)	// 에라토스테네스의 체
	{
		if (check[i] == false)	// 지워지지 않음
		{
			prime[pn++] = i;
			for (int j = i + i; j <= MAX; j += i)
				check[j] = true;
		}
	}

	int t;
	cin >> t;

	while (t--)
	{
		int num, cnt = 0;
		cin >> num;

		for (int i = 0; i < pn; i++)
		{
			if (num - prime[i] >= 2 && prime[i] <= num - prime[i])
			{
				if (check[num - prime[i]] == false)	cnt++;
			}
			else break;
		}
		cout << cnt << '\n';
	}
}
