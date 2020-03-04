// 2020-01-20 13(가장 많이 사용된 자릿수)
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	map<int, int> m;
	int max = 0, cnt = 0;
	string n;
	cin >> n;

	for (auto i : n)
	{
		m[i - '0']++;
		if (m[i - '0'] > max)	max = m[i - '0'];
	}

	for (int i = 9; i >= 0; i--)
	{
		if (m[i] == max)
		{
			cout << i;
			break;
		}
	}
}