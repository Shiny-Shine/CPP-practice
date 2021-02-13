/*
	2021-02-13 BOJ - 10866(덱)
*/
#include <iostream>
#include <algorithm>
#include <string>
#include <deque>
using namespace std;

int main()
{
	string str;
	deque<int> dq;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> str;
		if (str == "push_back")
		{
			cin >> num;
			dq.push_back(num);
		}
		else if (str == "push_front")
		{
			cin >> num;
			dq.push_front(num);
		}
		else if (str == "pop_back")
		{
			if (dq.empty() == 1)	cout << -1 << '\n';

			else
			{
				cout << dq.back() << '\n';
				dq.pop_back();
			}
		}
		else if (str == "pop_front")
		{
			if (dq.empty() == 1)	cout << -1 << '\n';

			else
			{
				cout << dq.front() << '\n';
				dq.pop_front();
			}
		}
		else if (str == "size")
		{
			cout << dq.size() << '\n';
		}
		else if (str == "empty")
		{
			cout << dq.empty() << '\n';
		}
		else if (str == "front")
		{
			if (dq.empty() == 1)	cout << -1 << '\n';
			else cout << dq.front() << '\n';
		}
		else if (str == "back")
		{
			if (dq.empty() == 1)	cout << -1 << '\n';
			else cout << dq.back() << '\n';
		}
	}
}
