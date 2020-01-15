/*
	BOJ - 9465(½ºÆ¼Ä¿)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

int d[2][100001], score[2][100001];

int main()
{
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		for (int j = 0; j <= 1; j++)
		{
			for (int k = 1; k <= n; k++)
			{
				scanf("%d", &score[j][k]);
			}
		}
		d[0][1] = score[0][1];
		d[1][1] = score[1][1];

		for (int j = 2; j <= n; j++)
		{
			d[0][j] = max(d[1][j - 1], d[1][j - 2]) + score[0][j];
			d[1][j] = max(d[0][j - 1], d[0][j - 2]) + score[1][j];
		}
		printf("%d\n", max(d[0][n], d[1][n]));
	}
}