//2019-11-25 BOJ-2750(�� �����ϱ�)
//���� ���� �ܼ� ���� ����.
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