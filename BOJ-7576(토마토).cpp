// 2020-08-08 BOJ - 7576(토마토)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
using namespace std;

int map[1001][1001];
int mark[1001][1001];
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };
// 좌 우 하 상
int n, m, day;

int main()
{
    scanf("%d %d", &n, &m);
    queue<pair<int, int>> q;
    int index = 0;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &map[i][j]);
            mark[i][j] = -1;
            if (map[i][j] == 1)
            {
                q.push(make_pair(i, j));
                mark[i][j] = 0;
            }
        }
    }

    while (q.empty() == false)
    {
        pair<int, int> v = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = v.first + dx[i];
            int ny = v.second + dy[i];
            if (nx <= m && nx > 0 && ny <= n && ny > 0)
            {
                if (map[nx][ny] == 0 && mark[nx][ny] == -1)
                {
                    q.push(make_pair(nx, ny));
                    mark[nx][ny] = mark[v.first][v.second] + 1;
                }
            }
        }
    }

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (map[i][j] == 0 && mark[i][j] == -1)
            {
                printf("-1");
                return 0;
            }
            if (day < mark[i][j])    day = mark[i][j];
        }
    }

    printf("%d", day);
}
