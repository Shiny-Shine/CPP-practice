//2019-11-25 BOJ-10812(바구니 순서 바꾸기)
//배열을 회전하는 문제이다, rotate를 사용했다.
//문제 이해를 문제를 풀고도 못 했다, 왜 end값을 먼저 받는지...정답 분석이 필요하다.
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