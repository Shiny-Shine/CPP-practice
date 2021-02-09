// 2021-02-09 BOJ - 1018(체스판 다시 칠하기)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int blackFirstChack(int x, int y);
int whiteFirstChack(int x, int y);

string whiteFirst[8] =
{
	{ "WBWBWBWB" },
	{ "BWBWBWBW" },
	{ "WBWBWBWB" },
	{ "BWBWBWBW" },
	{ "WBWBWBWB" },
	{ "BWBWBWBW" },
	{ "WBWBWBWB" },
	{ "BWBWBWBW" }
};

//(0, 0)이 B인 체스보드

string blackFirst[8] =
{
	{ "BWBWBWBW" },
	{ "WBWBWBWB" },
	{ "BWBWBWBW" },
	{ "WBWBWBWB" },
	{ "BWBWBWBW" },
	{ "WBWBWBWB" },
	{ "BWBWBWBW" },
	{ "WBWBWBWB" }
};

char map[50][50];

int main()
{
	int n, m, result = 100000;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> map[i][j];
		}
	}

	for (int i = 0; i + 7 < n; i++)
	{
		for (int j = 0; j + 7 < m; j++)
		{
			result = min(result, blackFirstChack(i, j));
			result = min(result, whiteFirstChack(i, j));
		}
	}

	cout << result;
}

int blackFirstChack(int x, int y)
{
	int cnt = 0;

	for (int i = x; i < x + 8; i++)
	{
		for (int j = y; j < y + 8; j++)
		{
			if (map[i][j] != blackFirst[i - x][j - y])	cnt++;
		}
	}

	return cnt;
}

int whiteFirstChack(int x, int y)
{
	int cnt = 0;

	for (int i = x; i < x + 8; i++)
	{
		for (int j = y; j < y + 8; j++)
		{
			if (map[i][j] != whiteFirst[i - x][j - y])	cnt++;
		}
	}

	return cnt;
}
