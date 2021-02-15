/*
	2021-02-13 BOJ - 1003(피보나치 함수)
*/
#include <iostream>
#include <algorithm>
using namespace std;

int d0[41];
int d1[41];

int main()
{
	int t, n;
	cin >> t;

	d0[0] = 1;
	d1[1] = 1;
	d0[2] = 1;
	d1[2] = 1;

	for (int i = 3; i < 41; i++)
	{
		d0[i] = d0[i - 1] + d0[i - 2];
		d1[i] = d1[i - 1] + d1[i - 2];
	}

	for (int i = 0; i < t; i++)
	{
		cin >> n;
		cout << d0[n] << ' ' << d1[n] << '\n';
	}
}

/*
2 = 1, 1
3 = 2, 1
4 = 3, 2
5 = 5 , 3
*/
