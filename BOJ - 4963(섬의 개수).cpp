// 2020-08-01 BOJ - 4963(섬의 개수)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int map[51][51];
bool mark[51][51];
int dx[] = { 0, 0, 1, -1 , 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0 , 1, -1, -1, 1 };

void dfs(int x, int y)
{
    mark[x][y] = true;

    for (int i = 0; i < 8; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (map[nx][ny] == 1 && mark[nx][ny] == false)
            dfs(nx, ny);
    }

    return;
}

void init()
{
    for (int i = 1; i <= 51; i++)
        for (int j = 1; j <= 51; j++)
        {
            map[i][j] = 0;
            mark[i][j] = 0;
        }
}

int main()
{
    while (true)
    {
        int w, h, group = 0;
        cin >> w >> h;

        if (w + h == 0)  break;
        init();

        for (int i = 1; i <= h; i++)
            for (int j = 1; j <= w; j++)
                scanf("%1d", &map[i][j]);

        for (int i = 1; i <= h; i++)
            for (int j = 1; j <= w; j++)
                if (mark[i][j] == 0 && map[i][j] != 0)
                {
                    group++;
                    dfs(i, j);
                }

        cout << group << '\n';
    }
}
