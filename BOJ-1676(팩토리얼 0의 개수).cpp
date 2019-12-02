//2019-12-02 BOJ-1676(팩토리얼 0의 개수)
//문제 이해를 못해서 질문검색에 들어가서 이해를 했는데
//풀고서도 잘 모르겟다... 재귀로 2, 5로 나눠지는 개수를 세서 작은 것 출력.
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int two, five;

void cnt(int n)
{
	if (n < 2)	return;
	cnt(n - 1);
	while (n % 2 == 0)
	{
		n /= 2;
		two++;
	}
	while (n % 5 == 0)
	{
		n /= 5;
		five++;
	}
}

int main()
{
	int n;
	cin >> n;
	cnt(n);
	if (five < two)	cout << five;
	else cout << two;
}