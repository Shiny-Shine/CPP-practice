//2019-11-29 BOJ-11005(���� ��ȯ 2)
//10������ N������ ����ϴ� ����. N������ ������ ���� �������� �迭�� ����ش�,
//�迭�� ������ �Ŀ� ����/���� ���� ���� ��ȯ�� �� �ش�.
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int num, notation;
	cin >> num >> notation;
	vector<int> v;

	while (num > 0)
	{
		v.push_back(num % notation);
		num /= notation;
	}
	//������ ������ ex)123 > 321�� ����.
	reverse(v.begin(), v.end());

	for (char i : v)
	{
		//9�̸� ���ڸ� ����, ���̻��� ��ȯ�ؼ� �빮�� ���ĺ�����.
		if (i < 10)
			printf("%d", i);
		else
			printf("%c", i - 10 + 'A');
	}
}