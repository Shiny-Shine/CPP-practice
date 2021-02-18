// 2021-02-17 BOJ-17299(오등큰수)
#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

int freq[1000001];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	stack<int> s;
	int n;
	cin >> n;

	vector<int> arr(n);
	vector<int> ans(n);

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		freq[arr[i]]++;
	}

	s.push(0);
	for (int i = 1; i < n; i++)
	{
		if (s.empty())
			s.push(i);

		while (!s.empty() && freq[arr[s.top()]] < freq[arr[i]])
		{
			ans[s.top()] = arr[i];
			s.pop();
		}

		s.push(i);
	}

	while (!s.empty())
	{
		ans[s.top()] = -1;
		s.pop();
	}

	for (int i = 0; i < n; i++)	cout << ans[i] << ' ';
}
