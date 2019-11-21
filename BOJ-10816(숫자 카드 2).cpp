//2019-11-21 BOJ-10815(숫자 카드)
//시간 초과(TL)와의 싸움. 입출력에 시간이 오래 걸릴줄은 몰랏다.
//정렬, 탐색 등을 피하기 위해 map을 썼지만, map 내부 정렬 과정때매 TL.
//내부 정렬을 하지않는 unordered map을 사용했다.
//입출력 시간을 줄이기 위해 scanf/printf를 사용했는데도 832ms나 걸렷다.
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