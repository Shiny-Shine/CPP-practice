//2019-11-25 BOJ-10807(개수 세기)V2
//STL 함수들을 최대한 써야하는데 그렇지 못하고 배열로 풀어 다시 풀었다.
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