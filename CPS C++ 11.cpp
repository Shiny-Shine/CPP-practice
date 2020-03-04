// 2020-01-20 11(숫자의 총 개수)
#include <iostream>
using namespace std;

int main()
{
	int n, cnt = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (i < 10)		cnt++;
		else if (i >= 10 && i < 100)	cnt += 2;
		else if (i >= 100 && i < 1000)	cnt += 3;
		else if (i >= 1000 && i < 10000)	cnt += 4;
		else if (i >= 10000 && i < 100000)	cnt += 5;
	}
	cout << cnt;
}