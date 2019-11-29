//2019-11-29 BOJ-2745(진법 변환)
//N진수를 10진수로 변환해 출력하면된다.
//함수를 직접 구현하거나, strtol함수를 사용하면 된다.
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	int num, sum = 0;
	cin >> s >> num;

	for (char i : s)
	{
		if (i <= '9')
		{
			//1~9 = 원래 진법 * 합 + (글자 - 0)
			sum = num * sum + (i - '0');
			//cout << (int)i - '0' << ' ' << sum << '\n';
		}
		else
		{
			//A~Z = 원래 진법 * 합 + (글자 + 10 - 'A')
			sum = num * sum + (i + 10 - 'A');
			//cout << (int)i - 'A' << ' ' << sum << '\n';
		}
	}
	cout << sum;
}