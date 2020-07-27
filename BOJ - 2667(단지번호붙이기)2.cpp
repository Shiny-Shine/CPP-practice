// 2020-07-27 BOJ - 2667(단지번호붙이기)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> dangecnt;
int map[26][26];
bool mark[26][26];
int dx[] = { 0, 0, 1, -1 };	// for로 4방향을 탐색하기 위해 미리 지정
int dy[] = { 1, -1, 0, 0 };
int cnt;

void dfs(int x, int y)
{
	// 마킹 후 카운트만 증가시키면 됨
	mark[x][y] = true;
	cnt++;

	// 4방향을 돌며 dfs
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (map[nx][ny] == 1 && mark[nx][ny] == false)
			dfs(nx, ny);
	}

	return;
}

int main()
{
	int n, group = 0;
	cin >> n;

	// %1d로 한자씩 입력받음
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			scanf("%1d", &map[i][j]);

	// 완전탐색하며 마킹안된 1일경우 dfs
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (mark[i][j] == 0 && map[i][j] != 0)
			{
				cnt = 0;	group++;
				dfs(i, j);
				dangecnt.push_back(cnt);
			}

	sort(dangecnt.begin(), dangecnt.end());

	cout << group << '\n';
	for (int i : dangecnt)
		cout << i << '\n';
}
