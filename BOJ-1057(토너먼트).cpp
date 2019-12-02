//2019-12-02 BOJ-1057(토너먼트)
//이해하면 간단해지는 문제.
//한 라운드 진행하면 인원이 절반 감소하고, 홀수면 한명이 부전승하기 때문에
//(입력받은수 + 1) / 2 의 공식으로 간편하게 풀 수 있다.
#include <iostream>
using namespace std;

int main()
{
	int n, k, i, cnt = 0;
	
	cin >> n >> k >> i;
	
	while(k != i)
	{
		k = (k + 1) / 2;
		i = (i + 1) / 2;
		cnt++;
	}
	cout << cnt;
}
