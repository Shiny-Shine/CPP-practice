//2019-11-22 BOJ-9012(괄호)
//평범한 If else 문제이다, 아마도 스택으로 풀어야 맞는 것 같은데 잘못 푼거같다.
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		string ps;	//Parenthesis String
		cin >> ps;
		if (ps.length() % 2 != 0)
		{
			cout << "NO" << '\n';
			continue;
		}
		if (ps[0] == ')')
		{
			cout << "NO" << '\n';
			continue;
		}
		int stat = 0;

		for (auto i : ps)
		{
			(i == '(') ? stat++ : stat--;
			if (stat < 0)	break;
		}

		if (stat == 0)	cout << "YES" << '\n';
		else cout << "NO" << '\n';
	}
}