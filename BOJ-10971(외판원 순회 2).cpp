// 2020-08-25 BOJ-10971(외판원 순회 2)
// 재귀로 한 라인씩 파고 들어가며 모든 경우의 수를 탐색한다.
#include <iostream>
#include <stack>
using namespace std;

int n, mini = 1e9, sum = 0;
int cost[10][10];
bool mark[10] = { false };

// now = 현재 라인
void check(int now)
{
	// 탐색 후 재귀가 끝나 돌아갈 때를 대비해 이전 단계 값을 백업
	int sum2 = sum;
	mark[now] = true;

	// 현재 라인이 마지막인지 확인
	bool searchAll = true;
	for (int i = 0; i < n; i++)
		if (mark[i] == false)
		{
			searchAll = false;
			break;
		}

	if (searchAll)	// 현재 라인이 마지막이라면
	{
		if (cost[now][0] == 0)	// 탐색이 불가능한 루트로 왔을시 바로 복귀
		{
			mark[now] = false;
			return;
		}

		sum += cost[now][0];		// 마지막 라인에선 항상 시작점으로 돌아가야 함
		if (sum < mini)	mini = sum;	// 마지막 라인에서만 sum값 비교
		sum = sum2;					// 다음 탐색을 위해 재귀 리턴 전에 sum값 복구
		mark[now] = false;			// 표식도 복구
		return;
	}

	// 탐색 가능한 구간을 찾아 라인 하나씩 재귀로 파고 들어간다.
	for (int i = 0; i < n; i++)
	{
		if (mark[i] == false && cost[now][i] != 0)
		{
			sum += cost[now][i];
			check(i);
			sum = sum2;
		}
	}

	mark[now] = false;
	return;
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> cost[i][j];
		}
	}

	// 어느 줄에서 시작해도 무관
	check(0);

	// 모든 값이 0일경우 0출력
	if (mini == 1e9)	mini = 0;
	cout << mini;
}
