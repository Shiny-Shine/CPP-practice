/*
	2019-12-12 BOJ-1213(팰린드롬 만들기)V2

	이전에는 알파벳 개수를 세지 않고 문자열을 만들었는데
	이번에는 정렬 후 두개의 스택에 나눠 담고 다시 합치는 방식으로
	구현했다.
*/
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	cin >> s;
	sort(s.begin(), s.end());	//미리 알파벳 순으로 정렬

	char center = 0;
	stack<char> l, r;	//Left, Right Stack

	for (int i = 0; i < s.size();)
	{
		if (s[i] == s[i + 1])
		{
			l.push(s[i]);
			r.push(s[i + 1]);
			i += 2;
		}
		else	//홀수개인 문자가 등장할 때.
		{
			if (center == 0)	//첫 번째 홀수 문자.
			{
				center = s[i];
				i++;	//중앙으로 넣기 위해 저장.
			}
			else	//두 번째 홀수 문자, 이 경우 절대 팰린드롬이 될 수 없다.
			{
				cout << "I'm Sorry Hansoo";
				return 0;
			}
		}
	}

	if (center != 0)	r.push(center);
	
	while (!l.empty())
	{
		r.push(l.top());
		l.pop();
	}
	while (!r.empty())
	{
		cout << r.top();
		r.pop();
	}
}