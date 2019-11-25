//2019-11-25 BOJ-10813(공 바꾸기)
//swap 함수를 사용하는 간단한 문제.
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