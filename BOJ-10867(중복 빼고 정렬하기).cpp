//2019-11-20 BOJ-10869(�ߺ� ���� �����ϱ�)
//vector�� �����ؼ� unique �� ���ָ� �Ǵ� ������ �����̴�.
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