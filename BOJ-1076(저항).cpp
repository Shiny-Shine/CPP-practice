//2019-11-20 BOJ-1076(저항)
//보기만 해도 재미있어질거같은(?) 문제이다.
//tuple을 사용해 모든 저항표를 벡터에 다 담았다.
#include <iostream>
#include <vector>
#include <tuple>
#include <string>
using namespace std;

int main()
{
	vector<tuple<string, int, int>> resistance(10);
	resistance[0] = make_tuple("black", 0, 1);
	resistance[1] = make_tuple("brown", 1, 10);
	resistance[2] = make_tuple("red", 2, 100);
	resistance[3] = make_tuple("orange", 3, 1000);
	resistance[4] = make_tuple("yellow", 4, 10000);
	resistance[5] = make_tuple("green", 5, 100000);
	resistance[6] = make_tuple("blue", 6, 1000000);
	resistance[7] = make_tuple("violet", 7, 10000000);
	resistance[8] = make_tuple("grey", 8, 100000000);
	resistance[9] = make_tuple("white", 9, 1000000000);

	long long int val = 0;
	string s;
	for (int i = 0; i < 2; i++)
	{
		cin >> s;
		for (auto i : resistance)
		{
			if (s == get<0>(i))	val = (val * 10) + get<1>(i);
		}
	}	//1, 2번째 입력과 마지막 입력을 따로 받는다.

	cin >> s;
	for (auto i : resistance)
	{
		if (s == get<0>(i))	val *= get<2>(i);
	}
	cout << val;
}