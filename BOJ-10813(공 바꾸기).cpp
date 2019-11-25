//2019-11-25 BOJ-10813(�� �ٲٱ�)
//swap �Լ��� ����ϴ� ������ ����.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> basket(n, 0);
	for (int i = 0; i < n; i++)	basket[i] = i + 1;

	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		swap(basket[a - 1], basket[b - 1]);
	}
	for (auto i : basket)	cout << i << ' ';
}