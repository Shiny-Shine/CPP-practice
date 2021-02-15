/*
	2021-02-08 BOJ - 17175(피보나치는 지겨웡~)

	d[n] 규정. n을 입력했을 때, fibo 함수가 호출 되는 총 횟수

	출력할때 1,000,000,007 로 나눈 나머지를 출력해줘야 하는데
	실수로 % 가 아닌 / 를 써서 해멨다.
*/

#include <iostream>
#include <algorithm>
using namespace std;

long long int d[51];

int main()
{
	int n;
	cin >> n;

	d[0] = 1;
	d[1] = 1;
	d[2] = 3;
	d[3] = 5;

	for (int i = 4; i <= n; i++)
	{
		d[i] = d[i - 1] + d[i - 2] + 1;
	}

	cout << int(d[n] % 1000000007);
}
