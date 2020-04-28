// 2020-04-26 SWM Coding test season2 - 1
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	vector<int> d(n), orange(n);

	for (int i = 0; i < n; i++)	scanf("%d", &orange[i]);

	d[0] = orange[0];

	for (int i = 1; i < n; i++)
	{
		d[i] = max(0, d[i - 1]) + orange[i];
	}

	printf("%d\n", *max_element(d.begin(), d.end()));
}