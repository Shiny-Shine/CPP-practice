/*
	2019-12-19 BOJ-1094(막대기)
	
	로직이 완전히 같은데도 표현하는 방식이 다르다.
	저번에풀땐 수학적 접근을 못해 검색했는데 이번엔 혼자 풀었다.
*/
#include <iostream>
using namespace std;

int main()
{
	int stick = 64, sum = 0, num, cnt = 0;
	cin >> num;

	while (sum != num)
	{
		if (stick <= num && sum + stick <= num)
		{
			sum += stick;
			cnt++;
		}
		stick /= 2;
	}
	cout << cnt;
}
