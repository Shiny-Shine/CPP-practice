//2019-11-27 BOJ-10819(차이를 최대로)V2
//원래는 요구하는 순열을 직접 만들어서 더했는데, 이번엔 next_permutation 함수로
//순열의 모든 경우의 수마다 합을 다 구해서 최대값을 출력했다.
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int calculate(vector<int>& a)
{
	int sum = 0;
	for (int i = 1; i < a.size(); i++)
		sum += abs(a[i - 1] - a[i]);

	return sum;
}

int main()
{
	int n, ans = 0;
	cin >> n;
	vector<int> a(n);

	for (int i = 0; i < n; i++)	cin >> a[i];

	sort(a.begin(), a.end());

	do
	{
		int temp = calculate(a);
		ans = max(ans, temp);
	} while (next_permutation(a.begin(), a.end()));
	//순열의 최소값에서 최대값으로 가는 단계의 순열을 만들어냄.
	//한번 실행하면 '한 단계' 더 큰 순열을 만들어낸다, 최대값일시 false리턴.
	//ex) 1234 => 1243, 반대로 prev_permutation 함수도 존재.

	cout << ans << '\n';
}