// 2020-01-20 6(숫자만 추출)
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, i, j;
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		int cnt = 0;
		for (j = 1; j * j < i; j++)	if (i % j == 0)	cnt += 2;

		if (j * j == i)	cnt++;

		cout << cnt;
	}
}