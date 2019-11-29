//2019-11-29 BOJ-1373(2���� 8����)
//ó���� �ܼ��� ���� ��ȯ ������ �ڵ常 �����ߴٰ�, �ڸ����� �е����ߴ�.
//int�����δ� ���� ��Ǯ��, ������ ����ؼ� �� �ڸ��� ����/���� �ߴ�.
#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string b;
	stack<int> o;	//Binary, octal number
	cin >> b;

	//string���� ������ �޾� ������.
	reverse(b.begin(), b.end());

	for (int i = 0; i < b.length(); i += 3)
	{
		//�������� 3�ڸ��� ���� ���� ��ȯ�� ���ÿ� ���ڸ��� ����.
		int sum = 0, num = 1;
		for (int j = 0; j < 3; j++)
		{
			if (b[i + j] == '1')	sum += num;
			num = num << 1;
		}
		o.push(sum);
	}
	while (!o.empty())
	{
		int a = o.top();
		cout << a;
		o.pop();
	}
}