//2019-11-25 BOJ-10807(공 넣기)V2
//STL 함수들을 최대한 써야하는데 그렇지 못하고 배열로 풀어 다시 풀었다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m, s, e, num;	//start, end
	cin >> n >> m;
	vector<int> basket(n, 0);	//n길이 벡터 0으로 초기화
	
	for (int i = 0; i < m; i++)
	{
		cin >> s >> e >> n;
		fill(basket.begin() + s - 1, basket.begin() + e, n);
	}
	for (auto i : basket)	cout << i << ' ';
}