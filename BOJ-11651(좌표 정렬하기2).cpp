//2019-11-27 BOJ-11651(좌표 정렬하기2)
//좌표 1이랑 같은데, xy가 바뀜, 조건함수를 구현하라고 낸 문제같지만
//좌표 1에서 이미 조건함수를 구현해서 걍 패스.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool sortby12(const pair<int, int>& a, const pair<int, int>& b)
{
	if (a.second == b.second)
		return a.first < b.first;
	else
		return a.second < b.second;
}

int main()
{
	int n;
	cin >> n;
	vector<pair<int, int>> location;

	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		location.push_back(make_pair(x, y));
	}
	sort(location.begin(), location.end(), sortby12);
	for (auto i : location)	cout << i.first << ' ' << i.second << '\n';

}
