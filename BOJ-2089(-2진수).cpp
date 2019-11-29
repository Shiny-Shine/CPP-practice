//2019-11-29 BOJ-2089(-2진수)
//재귀로 풀었고, 문제 이해를 못해서 검색을 했다...
//-2로 계속 나눠주며 출력하면 된다.
#include <iostream>
using namespace std;

void binary(int d)
{
	if (d == 0)	return;
	if (d % -2 == 0)
	{
		binary(d / -2);
		printf("0");
	}
	else
	{
		binary((d - 1) / -2);
		printf("1");
	}
}

int main()
{
	int d;	//decimal, binary number
	cin >> d;
	if (d == 0)
	{
		cout << 0;
		return 0;
	}

	binary(d);
}