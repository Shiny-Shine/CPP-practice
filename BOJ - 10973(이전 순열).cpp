// 2020-08-19 BOJ - 10973(이전 순열)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, idx = -1, idx2 = -1;
	cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++)
		cin >> v[i];

	// 순열을 순회하며 다음 idx가 현재 idx보다 작은 마지막 지점을 찾는다.
	for (int i = 0; i < n - 1; i++)
		if (v[i] > v[i + 1])	idx = i;

	// 다음 인덱스 가 현재 인덱스보다 작은 부분이 없으면 내림차순 순열, 다음 순열은 없다.
	if (idx == -1)
	{
		cout << -1;
		return 0;
	}

	// idx 이후로 순회하며 idx보다 작은 마지막 인덱스를 구한다.
	for (int i = idx; i < n; i++)
		if (v[idx] > v[i])	idx2 = i;

	// idx와 idx2를 스왑해준다.
	int temp = v[idx];
	v[idx] = v[idx2];
	v[idx2] = temp;

	auto i1 = v.begin() + idx + 1;

	reverse(i1, v.end());

	for (int i = 0; i < n; i++)
	{
		cout << v[i] << ' ';
	}
}
