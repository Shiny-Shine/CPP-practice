//2019-11-25 BOJ-10808(���ĺ� ����)
//�迭�� ����� �ʰ� ������ ����.
#include <iostream>
#include<vector>
#include <string>
using namespace std;

int main(void)
{
	int alp[26] = { 0 };
	string s;
	cin >> s;
	for (auto i : s)
	{
		for (int j = 97; j <= 122; j++)
		{
			if (i == j)	alp[j - 97]++;
		}
	}
	for (int j = 97; j <= 122; j++)
	{
		cout << alp[j - 97] << ' ';
	}
}