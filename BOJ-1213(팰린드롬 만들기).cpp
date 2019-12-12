/*
	2019-12-07 BOJ-1213(팰린드롬 만들기)

	꽤나 재미있는 문제였다. next_permutation으로 하나하나 바꿔가며 만들었는데
	TL이 나서 겁근하는데 검색의 도움을 받았다.

	문장을 받아 알파벳 개수를 세어준 뒤, 새 문자열에 각 알파벳 개수의 반 만큼
	문자열을 추가해주고 출력한 뒤 거꾸로 출력한다.
	길이가 홀수일 경우엔 홀수인 알파벳 하나를 저장했다가 출력 사이에 끼워준다.
*/
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

	for (int i = 0; i < s.length(); i++)	//알파벳 개수 세기.
		alpha[s[i] - 'A']++;

	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] % 2 == 1)	//홀수 알파벳이 2개면 팰린드롬이 아님.
		{
			if (flag == 2)
			{
				cout << "I'm Sorry Hansoo";
				return 0;
			}
			flag++;
			odd = i + 'A';	//홀수인 알파벳 저장.
		}
		for (int j = 0; j < alpha[i] / 2; j++)
		{
			revs.push_back(i + 'A');	//새 문자열 만들기.
		}
	}

	if (l % 2 == 0)
	{
		if (revs.length() == l / 2)	//문자열 길이가 안맞아도 팰린드롬이 아님.
		{
			cout << revs;
			reverse(revs.begin(), revs.end());	//출력 > 뒤집기 > 출력.
			cout << revs;
		}
		else cout << "I'm Sorry Hansoo";
	}
	else
	{
		cout << revs << odd;
		reverse(revs.begin(), revs.end());	//출력 > 담아뒀던 문자 > 뒤집기 > 출력.
		cout << revs;
	}
}
