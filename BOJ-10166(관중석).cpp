/*
	2020-02-21 BOJ-10166(관중석)

	2019년 4월에 처음 풀때는 무슨 소린지 1도 몰랐고 인터넷을 보고도 몰랐지만,
	이제 와서 푸니까 어렵지는 않은 문제였다.

	그림상의 북쪽 좌석은 모든 원에 좌석이 있기때문에 계산하지 않고 처음부터 1을 더해놓고 시작한다.
	3번 원의 1번 좌석은 map[3][1]이다, 6번 원의 2번 좌석은 [6][2]지만, 기약분수로 만들면 [3][1]이다, 겹치는 거다.
	이런 식으로 좌표의 최소공배수(GCD)를 구해 겹치는지 판단하면 된다.
*/
#include <iostream>

using namespace std;

int map[2001][2001];

int gcd(int a, int b)
{
	return b ? gcd(b, a % b) : a;
}

int main()
{
	int d1, d2, answer = 1;
	cin >> d1 >> d2;

	for (int i = d1; i <= d2; i++)
	{
		for (int j = 1; j < i; j++)
		{
			int g = gcd(i, j);
			if (map[i / g][j / g] != 0)	continue;
			answer++;
			map[i / g][j / g]++;
		}
	}

	cout << answer;
}
