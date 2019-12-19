/*
	2019-12-03 BOJ-2004(조합 0의 개수)
	입력 범위 때문에 위의  팩토리얼 문제처럼은 못 푼다.
	수학에서 '조합'이란걸 잘 몰라서 풀고 나서도 잘 모르겠다...역시 수학이 문제다.
	올리는걸 까먹고 코드가 없어서 결과만 올린다.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	long long five = 0;
	long long two = 0;

	for (long long i = 2; i <= n; i *= 2)
		two = two + (n / i);

	for (long long i = 2; i <= m; i *= 2)
		two = two - (m / i);

	for (long long i = 2; i <= (n - m); i *= 2)
		two = two - ((n - m) / i);

	for (long long i = 5; i <= n; i *= 5)
		five = five + (n / i);

	for (long long i = 5; i <= m; i *= 5)
		five = five - (m / i);

	for (long long i = 5; i <= (n - m); i *= 5)
		five = five - ((n - m) / i);

	cout << min(two, five) << "\n";
}
