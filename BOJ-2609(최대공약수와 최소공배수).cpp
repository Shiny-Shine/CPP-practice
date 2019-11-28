//2019-11-28 BOJ-2609(최대공약수와 최소공배수)
//단순히 두 수의 GCD, LCM을 구하면 된다, 5월에 정올 준비하면서
//유클리드 호제법을 구현해봤어서 쉽게 풀었다.
#include <iostream>
using namespace std;

int GCD(int a, int b)
{
	while (b > 0)
	{
		int tmp = a;
		a = b;
		b = tmp % b;
	}
	return a;
}

int LCM(int a, int b)	{ return a * b / GCD(a, b); }

int main()
{
	int a, b;
	cin >> a >> b;

	cout << GCD(a, b) << ' ' << LCM(a, b) << '\n';

}