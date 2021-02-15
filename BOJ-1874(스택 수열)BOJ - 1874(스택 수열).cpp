// 2021-02-11 BOJ - 1874(스택 수열)
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	bool flag = true;
	string answer;
	stack<int> s;
	int n, cnt = 1;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int num;
		cin >> num;

		if (cnt < num)
		{
			while (cnt <= num)
			{
				s.push(cnt);
				cnt++;
				answer += "+\n";
			}
			s.pop();
			answer += "-\n";
		}
		else if (cnt == num)
		{
			s.push(cnt);
			cnt++;
			s.pop();
			answer += "+\n-\n";
		}
		else if (cnt > num)
		{
			if (s.top() == num)
			{
				s.pop();
				answer += "-\n";
			}
			else
			{
				flag = false;
				break;
			}
		}
	}

	if (flag == false)
	{
		cout << "NO";
		return 0;
	}

	cout << answer;

	return 0;
}
