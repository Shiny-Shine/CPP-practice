//2019-11-16 BOJ-10819(차이를 최대로)
//front 때문에 deq로 풀었다, 포인터는 쓸때마다 헷갈려 진짜;;
//flag를 기준으로 최소, 최대값 순서대로 넣어 배열을 만든 뒤 합을 구함.
#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
	deque<int> v, num;
	int n, flag = 1, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		num.push_back(a);
	}
	sort(num.begin(), num.end());	//정렬해주면 최소, 최대값을 front/end로 구할 수 있음.

	while (1)
	{
		if (num.size() == 1)	//하나 남았을땐 양 사이드 중 차이가 큰쪽으로 삽입.
		{
			if (abs(num.front() - v.front()) > abs(num.front() - v.back()))
				v.push_front(num.front());
			else
				v.push_back(num.front());

			num.pop_front();
		}

		if (num.size() == 0)	break;

		if (flag == 1)
		{
			v.push_back(num.front());
			v.push_front(num.back());
		}
		else
		{
			v.push_back(num.back());
			v.push_front(num.front());
		}

		num.pop_front();
		num.pop_back();
		flag *= -1;
	}
	for (int i = 1; i < n; i++)	sum += abs(v[i] - v[i - 1]);

	cout << sum;
}