//2019-12-07 BOJ-1213(팰린드롬 만들기)
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int alpha[26] = { 0 }, flag = 0;
	char odd;
	string s, revs;
	cin >> s;
	int l = s.length();

	for (int i = 0; i < s.length(); i++)
		alpha[s[i] - 'A']++;
	
	sort(s.begin(), s.end());

	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] % 2 == 1)
		{
			if (flag == 2)
			{
				cout << "I'm Sorry Hansoo";
				return 0;
			}
			flag++;
			odd = i + 'A';
		}
		for (int j = 0; j < alpha[i] / 2; j++)
		{
			revs.push_back(i + 'A');
		}
	}

	if (l % 2 == 0)
	{
			cout << revs;
			reverse(revs.begin(), revs.end());
			cout << revs;
	}
	else
	{
			cout << revs << odd;
			reverse(revs.begin(), revs.end());
			cout << revs;
	}
}