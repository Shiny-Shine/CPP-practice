// 2021-02-15 BOJ - 10799(쇠막대기) stack ver
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void)
{
	stack<int> s;
	string str;
	cin >> str;
	int n = str.size();
	int ans = 0;

	for (int i = 0; i < n; i++)
	{
		if (str[i] == '(')
			s.push(i);
		else
		{
			if (s.top() + 1 == i)
			{
				s.pop();
				ans += s.size();
			}
			else
			{
				s.pop();
				ans++;
			}
		}
	}

	cout << ans << '\n';
}
