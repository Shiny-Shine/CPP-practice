/*
	2020-02-24 BOJ-11756(Base Conversion)

	풀긴 풀었는데... 문제 이해하는데 너무 오래 걸렸다.
	그냥 이해하기 어렵게 자리수 사이에 일부로 공백을 넣어놓은 듯하다.
	왜 62(n진수)를 6 2 이렇게 표현하는지...
	그냥 입력받은거 하나의 10진수로 합치고 b진수로 변환후
	출력하는데 숫자사이에 공백을 넣어주면 된다.
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int a, b, m, ans = 0;
	int nums[30];
	cin >> a >> b >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> nums[i];
	}

	for (int i = 0; i < m; i++)
	{
		ans = ans * a + nums[i];
	}

	vector<int> v;
	while (ans != 0)
	{
		v.push_back(ans % b);
		ans /= b;
	}
	reverse(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
	{
		if (i == 0)	cout << v[i];
		else cout << ' ' << v[i];
	}
}
