//2019-11-25 BOJ-10807(���� ����)V2
//STL �Լ����� �ִ��� ����ϴµ� �׷��� ���ϰ� �迭�� Ǯ�� �ٽ� Ǯ����.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, find;
	cin >> n;
	vector<int> num(n);
	for (int i = 0; i < n; i++)	cin >> num[i];
	cin >> find;
	cout << count(num.begin(), num.end(), find);
}