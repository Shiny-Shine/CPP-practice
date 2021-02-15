// 2021-02-10 BOJ - 1920(수 찾기)
// 벡터로 풀 땐 시간 초과가 나더니 배열로 바꾸니 바로 됬다...뭐지?
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;

int binarySearch(int length, int target);

int numbers[100001];

int main()
{
	int n, m;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &numbers[i]);

	sort(numbers, numbers + n);

	scanf("%d", &m);

	for (int i = 0; i < m; i++)
	{
		int findNum;
		scanf("%d", &findNum);

		printf("%d\n", binarySearch(n, findNum));
	}
}

int binarySearch(int length, int target) {
	int left = 0, right = length - 1, mid;

	while (left <= right) {
		mid = (left + right) / 2;

		if (target == numbers[mid])	return 1;
		else {
			if (target < numbers[mid])
				right = mid - 1;
			else
				left = mid + 1;
		}
	}
	return 0;
}
