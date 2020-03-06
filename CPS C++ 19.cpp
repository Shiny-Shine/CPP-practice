// 2020-01-20 19(분노 유발자)
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> m(101);
	int n, cnt = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> m[i];

	int max = m[n - 1];
	for (int i = n - 2; i >= 0; i--)
	{
		if (max < m[i])
		{
			max = m[i];
			cnt++;
		}
	}

	cout << cnt;
}