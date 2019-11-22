//2019-11-22 BOJ-1927(최소 힙)
//최소 힙을 구현하는 문제, set로 구현하다 중복때문에 map로 갈았다.
//문제 이해를 못해서 좀 걸렸다, 문제를 똑바로 봐야하는데...
//포인터 연산하는게 자꾸 헷살려서 애먹었다.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <map>
using namespace std;

int main()	//TL때문에 scanf/printf 사용
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
		if (num == 0)	//0 입력받으면 출력
		{
			printf("%d\n", *it);
			heap.begin()->second--;
			if(heap.begin()->second == 0)heap.erase(heap.begin());
		}
		else heap[num]++;	//아니면 저장만
	}
}