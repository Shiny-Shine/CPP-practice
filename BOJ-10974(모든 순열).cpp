// 2020-08-22 BOJ-10974(모든 순열)
#include <iostream>
#include <algorithm>
using namespace std;

int arr[8];

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		arr[i] = i + 1;

	for (int i = 0; i < n; i++)
		cout << arr[i] << ' ';
	cout << '\n';

	while (next_permutation(arr, arr + n))
	{
		for (int i = 0; i < n; i++)
			cout << arr[i] << ' ';
		cout << '\n';
	}
}
