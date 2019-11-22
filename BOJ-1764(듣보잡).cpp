//2019-11-22 BOJ-1764(듣보잡)
//map으로 평범하게 풀었다...딱히 어려운점은 없는 것 같다.
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	map<string, int> name;
	string s;
	int num = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> s;
		name[s]++;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> s;
		name[s]++;
		if (name[s] == 2)	num++;
	}
	cout << num << '\n';
	for (auto i : name)
	{
		if (i.second == 2)	cout << i.first << '\n';
	}
}