// 2020-07-25 BOJ - 2667(단지번호붙이기)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> dangecnt;
int edge[26][26];
int mark[26][26];
int cnt;

void dfs(int f, int t, int group)
{
	mark[f][t] = group;
	cnt++;

	// 오른쪽
	if (edge[f][t + 1] == 1 && mark[f][t + 1] == 0)
		dfs(f, t + 1, group);

	// 아래쪽
	if (edge[f + 1][t] == 1 && mark[f + 1][t] == 0)
		dfs(f + 1, t, group);

	// 왼쪽
	if (edge[f][t - 1] == 1 && mark[f][t - 1] == 0)
		dfs(f, t - 1, group);
	
	// 위쪽
	if (edge[f - 1][t] == 1 && mark[f - 1][t] == 0)
		dfs(f - 1, t, group);

	return;
}

int main()
{
	int n, group = 0;
	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			scanf("%1d", &edge[i][j]);
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (mark[i][j] == 0 && edge[i][j] != 0)
			{
				cnt = 0;
				dfs(i, j, ++group);
				dangecnt.push_back(cnt);
			}
		}
	}

	sort(dangecnt.begin(), dangecnt.end());

	cout << group << '\n';
	for (int i : dangecnt)
		cout << i << '\n';
}
