//2019-11-26 BOJ-10818(�ּ�, �ִ�)
//���̺귯�� �Լ��� ����غ����� ã�Ƽ� ����.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> num;
	int n, a;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		num.push_back(a);
	}
	pair<vector<int>::iterator, vector<int>::iterator> mm = minmax_element(num.begin(), num.end());

	printf("%d %d", *mm.first, *mm.second);
}