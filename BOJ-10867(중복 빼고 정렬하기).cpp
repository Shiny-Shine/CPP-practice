//2019-11-20 BOJ-10869(중복 빼고 정렬하기)
//vector로 구현해서 unique 만 해주면 되는 간단한 문제이다.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	vector<int> v;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());
	auto last = unique(v.begin(), v.end());
	v.erase(last, v.end());

	for (auto i : v)
	{
		cout << i << " ";
	}
}