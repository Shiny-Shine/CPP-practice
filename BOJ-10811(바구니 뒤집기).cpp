//2019-11-25 BOJ-10811(바구니 뒤집기)
//단순한 정렬 문제로 생각했다가 틀렸다. pair vactor를 씀.
//vector를 내림차순 정렬하다가 애먹었다, 이유는 pair vector를 정렬하려면
//pair전체를 넘겨줘야 하는데, pair.first만 넘겨줘서 정렬이 안됬다.
//2중 반복이라 시간의 최적화가 필요할 듯 하다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
	return a.first > b.first;
}

int main()
{
	vector<pair<int, int>> basket;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)	basket.push_back(make_pair(i + 1, i + 1));

	for (int i = 0; i < m; i++)
	{
		int a, b, c = 1;
		for (int i = 0; i < n; i++)	basket[i].first = c++;
		cin >> a >> b;
		if (a != 0)	a--;

		sort(&basket[a], &basket[b], cmp);
	}

	for (auto i : basket)	cout << i.second << ' ';
}