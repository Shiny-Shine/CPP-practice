//2019-12-02 BOJ-1676(팩토리얼 0의 개수)
//문제 이해를 못해서 질문검색에 들어가서 이해를 했는데
//풀고서도 잘 모르겟다... 재귀로 2, 5로 나눠지는 개수를 세서 작은 것 출력.
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