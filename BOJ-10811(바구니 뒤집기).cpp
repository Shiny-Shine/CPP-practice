//2019-11-25 BOJ-10811(�ٱ��� ������)
//�ܼ��� ���� ������ �����ߴٰ� Ʋ�ȴ�. pair vactor�� ��.
//vector�� �������� �����ϴٰ� �ָԾ���, ������ pair vector�� �����Ϸ���
//pair��ü�� �Ѱ���� �ϴµ�, pair.first�� �Ѱ��༭ ������ �ȉ��.
//2�� �ݺ��̶� �ð��� ����ȭ�� �ʿ��� �� �ϴ�.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
	return a.first > b.first;
}

int main()
{
	vector<pair<int, int>> basket;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)	basket.push_back(make_pair(i + 1, i + 1));

	for (int i = 0; i < m; i++)
	{
		int a, b, c = 1;
		for (int i = 0; i < n; i++)	basket[i].first = c++;
		cin >> a >> b;
		if (a != 0)	a--;

		sort(&basket[a], &basket[b], cmp);
	}

	for (auto i : basket)	cout << i.second << ' ';
}