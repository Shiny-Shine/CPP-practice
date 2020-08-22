// 2020-08-22 BOJ-1476(날짜 계산)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int e, s, m;
	int earth = 0, sun = 0, moon = 0, cnt = 0;
	cin >> e >> s >> m;

	while (1)
	{
		earth++;
		sun++;
		moon++;
		cnt++;

		if (earth > 15)	earth = 1;
		if (sun > 28)	sun = 1;
		if (moon > 19)	moon = 1;

		if (earth == e && sun == s && moon == m)	break;
	}

	cout << cnt;
}
