//2019-11-22 BOJ-10799(�踷���)
//��ǥ���� ���� ����...������ �� �迭�� Ǯ���� ������...
//'('�϶����� ����Ⱑ �ϳ��� �߰��ǰ� ')'�϶����� ����Ⱑ
//�ϳ��� �������� ���� �ȴ�, ')'�ٷε� '('�̸� �������̴� ����.
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
		if (s[i] == '(')	idx++;	//����� �߰�
		else
		{
			if (s[i - 1] == '(')	cnt += --idx;	//����
			else	//������� ��
			{
				cnt++;
				idx--;
			}
		}
	}
	cout << cnt;
}