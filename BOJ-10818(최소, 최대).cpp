//2019-11-26 BOJ-10818(최소, 최대)
//라이브러리 함수를 사용해보려고 찾아서 썻다.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> num;
	int n, a;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		num.push_back(a);
	}
	pair<vector<int>::iterator, vector<int>::iterator> mm = minmax_element(num.begin(), num.end());

	printf("%d %d", *mm.first, *mm.second);
}