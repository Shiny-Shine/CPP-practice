//2019-11-25 BOJ-10807(���� ����)
//�迭�� ����� �ʰ� ������ ����.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	map<int, int> num;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		num[a]++;
	}

	int find;
	cin >> find;
	cout << num[find] << '\n';
}