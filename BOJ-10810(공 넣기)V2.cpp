//2019-11-25 BOJ-10807(�� �ֱ�)V2
//STL �Լ����� �ִ��� ����ϴµ� �׷��� ���ϰ� �迭�� Ǯ�� �ٽ� Ǯ����.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m, s, e, num;	//start, end
	cin >> n >> m;
	vector<int> basket(n, 0);	//n���� ���� 0���� �ʱ�ȭ
	
	for (int i = 0; i < m; i++)
	{
		cin >> s >> e >> n;
		fill(basket.begin() + s - 1, basket.begin() + e, n);
	}
	for (auto i : basket)	cout << i << ' ';
}