//2019-11-25 BOJ-10807(�ٱ��� ������)V2
//STL �Լ����� �ִ��� ����ϴµ� �׷��� ���ϰ� �迭�� Ǯ�� �ٽ� Ǯ����.
//reverse �Լ��� �������� ���ϰ� ������ �����߾���.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> basket(n, 0);	//n���� ���� 0���� �ʱ�ȭ

	for (int i = 0; i < n; i++)	basket[i] = i + 1;

	while (m--)
	{
		int s, e;
		cin >> s >> e;
		reverse(basket.begin() + s - 1, basket.begin() + e);
	}
	for (auto i : basket)	cout << i << ' ';
}