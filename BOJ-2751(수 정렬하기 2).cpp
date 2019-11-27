//2019-11-25 BOJ-2751(수 정렬하기 2)
//TL을 노리고 낸 문제, scanf/printf 로 풀면 시간을 줄일 수 있다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	vector<int> num;

	for (int i = 0; i < n; i++)
	{
		int x;
		scanf("%d", &x);
		num.push_back(x);
	}
	stable_sort(num.begin(), num.end());
	for (auto i : num)	printf("%d\n", i);

}
