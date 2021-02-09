// 2021-02-09 BOJ - 15829(Hashing)
#include <iostream>
using namespace std;

int MOD = 1234567891;
unsigned long long MULTIPLY = 1;

int main()
{
	char s[51];
	int length;
	cin >> length;
	cin >> s;

	unsigned long long sum = 0, p = 0;

	for (int i = 0; i < length; i++)
	{
		sum += (s[i] - 'a' + 1) * MULTIPLY;
		sum %= MOD;
		MULTIPLY *= 31;
		MULTIPLY %= MOD;
	}

	cout << sum;
}
