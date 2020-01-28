/*
  2020-01-28 BOJ-10844(쉬운 계단 수)
  
  거의 다 왔는데 별 시답잖은 오류들이 모여서 처리하기 상당히 애먹었다.
  2차원은 아직 너무 힘들다.
*/
#include <iostream>
using namespace std;

int main() {
    int d[101][10] = { 0 };
    for (int i = 1; i < 10; i++)
        d[0][i] = 1;
    int n, sum = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        d[i][0] = d[i - 1][1];
        d[i][9] = d[i - 1][8];
        for (int j = 1; j < 9; j++)
            d[i][j] = (d[i - 1][j + 1] + d[i - 1][j - 1]) % 1000000000;
    }
    for (int i = 0; i <= 9; i++)
        sum = (sum + d[n - 1][i]) % 1000000000;

    cout << sum << '\n';

    return 0;
}
