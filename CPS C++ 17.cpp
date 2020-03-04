// 2020-01-20 17(Anagram)
#include <iostream>
#include <map>
#include <string>
using namespace std;

int sum(int max)
{
	return  (max * (max + 1)) / 2;
}

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int m, ans;
		cin >> m >> ans;

		int cur = sum(m);

		if (ans == cur)	cout << "YES\n";
		else  cout << "NO\n";
	}
}