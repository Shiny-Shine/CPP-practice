//2019-11-25 BOJ-10807(바구니 뒤집기)V2
//STL 함수들을 최대한 써야하는데 그렇지 못하고 배열로 풀어 다시 풀었다.
//reverse 함수를 생각하지 못하고 정렬을 구현했었다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> basket(n, 0);	//n길이 벡터 0으로 초기화

	for (int i = 0; i < n; i++)	basket[i] = i + 1;

	while (m--)
	{
		int s, e;
		cin >> s >> e;
		reverse(basket.begin() + s - 1, basket.begin() + e);
	}
	for (auto i : basket)	cout << i << ' ';
}