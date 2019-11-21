//2019-11-21 BOJ-10815(���� ī��)
//�ð� �ʰ�(TL)���� �ο�. ����¿� �ð��� ���� �ɸ����� ������.
//����, Ž�� ���� ���ϱ� ���� map�� ������, map ���� ���� �������� TL.
//���� ������ �����ʴ� unordered map�� ����ߴ�.
//����� �ð��� ���̱� ���� scanf/printf�� ����ߴµ��� 832ms�� �ɷǴ�.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	unordered_map<int, int> card;
	for (int i = 0; i < n; i++)
	{
		int a;
		scanf("%d", &a);
		card[a]++;
	}
	
	int m;
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		int find;
		scanf("%d", &find);
		printf("%d ", card[find]);
	}

}