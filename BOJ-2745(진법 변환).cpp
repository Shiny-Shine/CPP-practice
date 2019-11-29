//2019-11-29 BOJ-2745(���� ��ȯ)
//N������ 10������ ��ȯ�� ����ϸ�ȴ�.
//�Լ��� ���� �����ϰų�, strtol�Լ��� ����ϸ� �ȴ�.
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	int num, sum = 0;
	cin >> s >> num;

	for (char i : s)
	{
		if (i <= '9')
		{
			//1~9 = ���� ���� * �� + (���� - 0)
			sum = num * sum + (i - '0');
			//cout << (int)i - '0' << ' ' << sum << '\n';
		}
		else
		{
			//A~Z = ���� ���� * �� + (���� + 10 - 'A')
			sum = num * sum + (i + 10 - 'A');
			//cout << (int)i - 'A' << ' ' << sum << '\n';
		}
	}
	cout << sum;
}