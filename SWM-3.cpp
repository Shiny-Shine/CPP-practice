// 2020-04-26 SWM Coding test season2 - 3
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	vector<pair<int, int>> v, pv;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		v.push_back(make_pair(a, b));
	}

	pv = v;

	sort(pv.begin(), pv.end());

	for (int i = 0; i < n; i++)
	{
		int cnt = 0;
		for (int j = 0; pv[j].first < v[i].second; j++)
		{
			if (v[i].first > pv[j].first && v[i].first < pv[j].second)	cnt++;
			if (j == n - 1)	break;
		}
		printf("%d\n", cnt);
	}
}