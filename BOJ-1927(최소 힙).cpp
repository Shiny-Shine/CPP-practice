//2019-11-22 BOJ-1927(�ּ� ��)
//�ּ� ���� �����ϴ� ����, set�� �����ϴ� �ߺ������� map�� ���Ҵ�.
//���� ���ظ� ���ؼ� �� �ɷȴ�, ������ �ȹٷ� �����ϴµ�...
//������ �����ϴ°� �ڲ� ������ �ָԾ���.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <map>
using namespace std;

int main()	//TL������ scanf/printf ���
{
	map<int, int> heap;
	int n, cnt = 0;
	cin >> n;

	for (int i = 0; i < n; i++)	//TS
	{
		auto it = heap.begin();
		int num;
		scanf("%d", &num);
		if (num == 0 && heap.empty())
		{
			printf("0\n");
			continue;
		}
		if (num == 0)	//0 �Է¹����� ���
		{
			printf("%d\n", *it);
			heap.begin()->second--;
			if(heap.begin()->second == 0)heap.erase(heap.begin());
		}
		else heap[num]++;	//�ƴϸ� ���常
	}
}