// 2021-02-18 BOJ - 6588(골드바흐의 추측)
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

	while(1)
	{
		int num;
		cin >> num;
		if (num == 0)	break;

		for (int i = 1; i < pn; i++)
		{
			if (check[num - prime[i]] == false)
			{
				cout << num << " = " << prime[i] << " + " << num - prime[i] << '\n';
				break;
			}
		}
	}
}
