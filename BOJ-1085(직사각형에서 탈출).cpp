/*
	2019-12-19 BOJ-1085(직사각형에서 탈출)

	오타 조심하자...
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int x, y, w, h, xx, yy;
	cin >> x >> y >> w >> h;

	if (x > w - x)	xx = w - x;
	else xx = x;
	if (y > h - y)	yy = h - y;
	else yy = y;

	cout << min(xx, yy);
}
