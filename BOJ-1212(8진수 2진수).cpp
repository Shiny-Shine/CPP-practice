//2019-11-29 BOJ-1212(8���� 2����)
//�������� �ݴ� ��Ȳ�� ����ϰ� Ǯ����, ������ ������ ���� �޶�����.
#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string o;
	stack<int> b;	//Binary, octal number
	cin >> o;

	//0�Է½�.
	if (o.length() == 1 && o[0] == '0')
	{
		cout << 0;
		return 0;
	}

	//string���� 8���� �޾� ������.
	reverse(o.begin(), o.end());

	//���ڸ��� ������ ���ڸ��� ��ȯ.
	for (char i : o)
	{
		int temp = i - '0';
		for (int i = 0; i < 3; i++)
		{
			b.push(temp % 2);
			temp /= 2;
		}
	}

	//�Ǿ� 0 ����.
	int temp = b.top();
	while (temp == 0)
	{
		temp = b.top();
		if (temp == 0)	b.pop();
	}

	while (!b.empty())
	{
		int a = b.top();
		b.pop();
		cout << a;
	}
}