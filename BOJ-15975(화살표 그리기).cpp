/*
	2020-02-17 BOJ-15975(화살표 그리기)

	와...아무리 STL BASE 문제 오랜만에 푼다지만 며칠을 고민했다...
	접근을 잘 했지만 풀이 방식이 지저분해서 컨테이너를 몇 번 바꿨는지 모르겠다.
	생각을 2차원적으로 했으면 이렇게 오래 고민하지 않는건데
	너무 1차원적으로 생각해서 며칠동안 고민했다.
	vector에다가 좌표를 push하면 index마다 좌표가 들어가는거지만
	난 vector[좌표]에다가 색깔을 넣을 생각만 하고있었다.

	2차원 vector가 이렇게 유연하게 동적할당이 되는지는 몰랐다, C++ 클라쓰.
	vector[색깔][좌표]로 입력받아 색깔별로 정렬 후 바로 앞 뒤 인데스만 확인해주면 간단히 풀린다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> list[100001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	int n, x, y;
	long long int sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		list[y].push_back(x);
	}

	for (int i = 1; i <= n; i++)
	{
		int size = list[i].size();
		if (size < 2)	continue;

		sort(list[i].begin(), list[i].end());

		for (int j = 0; j < size; j++)
		{
			if (j == 0)	sum += list[i][1] - list[i][0];
			else if (j == size - 1)	sum += list[i][j] - list[i][j - 1];
			else sum += min(list[i][j] - list[i][j - 1], list[i][j + 1] - list[i][j]);
		}
	}
	cout << sum;
}
