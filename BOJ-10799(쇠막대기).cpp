//2019-11-22 BOJ-10799(쇠막대기)
//대표적인 스택 문제...이지만 난 배열로 풀었다 ㅇㅅㅇ...
//'('일때마다 막대기가 하나씩 추가되고 ')'일때마다 막대기가
//하나씩 없어진다 보면 된다, ')'바로뒤 '('이면 레이져이니 절단.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int idx = 0, cnt = 0;
	int l = s.length();

	for (int i = 0; i < l; i++)
	{
		if (s[i] == '(')	idx++;	//막대기 추가
		else
		{
			if (s[i - 1] == '(')	cnt += --idx;	//절단
			else	//막대기의 끝
			{
				cnt++;
				idx--;
			}
		}
	}
	cout << cnt;
}