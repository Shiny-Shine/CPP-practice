/*
	2019-12-09 BOJ-1259(팰린드롬수)

	팰린드롬인지 판별하는 문제이다.
	문자열의 양 끝끼리 비교하면 된다.
*/
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
	string s, revs;

	while (1)
	{
		cin >> s;
		int l = s.length(), flag = 0;
		if (l == 1 && s[0] == '0')	break;

		for (int i = 0; i < l / 2; i++)
			if (s[i] != s[l - i - 1])
			{
				flag++;
				break;
			}

		if (flag == 0)	cout << "yes\n";
		else cout << "no\n";
	}
}