/*
	2019-12-12 BOJ-1213(�Ӹ���� �����)V2

	�������� ���ĺ� ������ ���� �ʰ� ���ڿ��� ������µ�
	�̹����� ���� �� �ΰ��� ���ÿ� ���� ��� �ٽ� ��ġ�� �������
	�����ߴ�.
*/
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	cin >> s;
	sort(s.begin(), s.end());	//�̸� ���ĺ� ������ ����

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
		else	//Ȧ������ ���ڰ� ������ ��.
		{
			if (center == 0)	//ù ��° Ȧ�� ����.
			{
				center = s[i];
				i++;	//�߾����� �ֱ� ���� ����.
			}
			else	//�� ��° Ȧ�� ����, �� ��� ���� �Ӹ������ �� �� ����.
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