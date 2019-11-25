//2019-11-25 BOJ-11650(좌표 정렬하기)
//평범한 pair정렬 문제, 10814번 문제에서 tuple만 pair로 수정했다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool sortby12(const pair<int, int>& a, const pair<int, int>& b)
{
	if (a.first == b.first)
		return a.second < b.second;
	else
		return a.first < b.first;
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
	for (auto i : location)	cout << i.first << ' ' <<i.second << '\n';

}