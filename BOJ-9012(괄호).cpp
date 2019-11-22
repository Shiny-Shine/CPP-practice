//2019-11-22 BOJ-9012(��ȣ)
//����� If else �����̴�, �Ƹ��� �������� Ǯ��� �´� �� ������ �߸� Ǭ�Ű���.
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