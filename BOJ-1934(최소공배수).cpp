//2019-11-28 BOJ-1934(최소공배수)
//최소공배수들을 쭉 출력하면 되는 문제, 유클리드 호재법.
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

int LCM(int a, int b) { return a * b / GCD(a, b); }

int main()
{
	int a, b, t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		cout << LCM(a, b) << '\n';
	}

}