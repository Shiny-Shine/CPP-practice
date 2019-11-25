//2019-11-25 BOJ-2750(수 정렬하기)
//더더 쉬운 단순 정렬 문제.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> num;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		num.push_back(x);
	}
	sort(num.begin(), num.end());
	for (auto i : num)	cout << i << '\n';

}