//2019-11-25 BOJ-10810(공 넣기)
//입력을 보기 전까지 문제 이해가 힘들었다.
#include <iostream>
using namespace std;

int main()
{
	int basket[101] = { 0 };
	int n, m;
	cin >> n >> m;

	for (int a = 0; a < m; a++)
	{
		int i, j, k;
		cin >> i >> j >> k;
		for (int b = i; b <= j; b++)
		{
			basket[b] = k;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		cout << basket[i] << ' ';
	}

}