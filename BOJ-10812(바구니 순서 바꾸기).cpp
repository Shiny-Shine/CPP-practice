//2019-11-25 BOJ-10812(�ٱ��� ���� �ٲٱ�)
//�迭�� ȸ���ϴ� �����̴�, rotate�� ����ߴ�.
//���� ���ظ� ������ Ǯ�� �� �ߴ�, �� end���� ���� �޴���...���� �м��� �ʿ��ϴ�.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> basket;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)	basket.push_back(i + 1);

	for (int i = 0; i < m; i++)
	{
		int b, m, e;
		cin >> b >> e >> m;
		if (b > 0)	b--;
		rotate(basket.begin() + b, basket.begin() + m - 1, basket.begin() + e);
	}
	for (auto i : basket)	cout << i << ' ';

}