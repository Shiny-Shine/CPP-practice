/*
	2021-02-13 BOJ - 11866(요세푸스 문제 0)
*/
#include <iostream>
#include <algorithm>
#include <string>
#include <list>
using namespace std;

int main()
{
	int n, k, step;
	cin >> n >> k;
	list<int> circle;

	for (int i = 1; i <= n; i++)
		circle.push_back(i);

	cout << "<";

	auto iter = circle.begin();
	while (1)
	{
		step = k - 1;
		if (circle.size() == 1)
		{
			cout << *iter << ">" << '\n';
			break;
		}

		while (step--)
		{
			iter++;
			if (iter == circle.end())	iter = circle.begin();
		}

		cout << *iter << ',' << ' ';
		iter = circle.erase(iter);
		if (iter == circle.end())	iter = circle.begin();
	}
}
