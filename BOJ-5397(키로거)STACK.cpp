//2019-11-20 BOJ-5397(Ű�ΰ�) ���� �籸�� ����
//�������� �籸���ϴ� ������ �ӵ��鿡�� �� ������,
//�߿��� �ڷᱸ���� ������ ����ϴ� ���趧���̶�� ���� �����ϼ̴�.
//List�� �����ϸ� 276ms, Stack�� �����ϸ� 132ms�� ���´�.
#include <iostream>
#include <stack>
#include<cstring>	//memset �Լ�.
#define MAX_SIZE 1000010

using namespace std;

char s[MAX_SIZE];

int main()
{
	int n;
	cin >> n;	//TestCase

	while (n--)
	{
		memset(s, 0, MAX_SIZE);
		scanf("%s", s);

		//Ŀ���� ���� 2�� ���̿� ��ġ�Ѵ�.
		//sl�� sr�� ��� �о�ְ� ���.
		//�Է��� �����鼭 Ŀ�� �۾��� ��.
		stack<char> sl, sr;
		int len = strlen(s);
		for (int i = 0; i < len; i++)
		{
			switch(s[i])
			{
			case '<':
				if (!sl.empty())	//������� ������
				{
					sr.push(sl.top());
					sl.pop();	//sl�� top���� sr�� �ű����ν� Ŀ�� �̵��� ����.
				}
				break;

			case '>':
				if (!sr.empty())	//���� ����
				{
					sl.push(sr.top());
					sr.pop();
				}
				break;

			case '-':
				if (!sl.empty())	sl.pop();//Ŀ���� ������ ������
				break;

			default:
				sl.push(s[i]);	//�Է�
				break;
			}

		}
		while (!sl.empty())	//�о�ֱ�
		{
			sr.push(sl.top());
			sl.pop();
		}

		while (!sr.empty())	//�о�ֱ�
		{
			printf("%c", sr.top());
			sr.pop();
		}
		printf("\n");
	}
}