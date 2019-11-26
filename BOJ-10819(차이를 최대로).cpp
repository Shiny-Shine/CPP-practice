//2019-11-16 BOJ-10819(���̸� �ִ��)
//front ������ deq�� Ǯ����, �����ʹ� �������� �򰥷� ��¥;;
//flag�� �������� �ּ�, �ִ밪 ������� �־� �迭�� ���� �� ���� ����.
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
	sort(num.begin(), num.end());	//�������ָ� �ּ�, �ִ밪�� front/end�� ���� �� ����.

	while (1)
	{
		if (num.size() == 1)	//�ϳ� �������� �� ���̵� �� ���̰� ū������ ����.
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