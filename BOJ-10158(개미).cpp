// 2020-09-14 BOJ-10158(개미)
// x, y축을 나눠서 생각한다, 시뮬레이션은 불가능하다(TLE).
// 최대값으로 먼저 이동한 후에, 끝까지 왕복(축 길이 * 2)한 부분을 없애고
// 남은 회수만큼 이동하면 된다.
#include<iostream>
using namespace std;

int position(int max, int now, int move)
{
	if (move + now <= max)	return now + move;	// 반복없이 끝나는 상황.

	move -= (max - now);	// 최대값 이동
	move %= max * 2;		// 왕복 제거
	int dir = -1;

	while (move--)
	{
		if (max == 0)	dir *= -1;
		max += dir;
	}
	return max;
}

int main()
{
	int w, h, p, q, t;
	cin >> w >> h >> p >> q >> t;

	cout << position(w, p, t) << ' ' << position(h, q, t);
}
