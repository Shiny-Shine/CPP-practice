/*
	2019-12-18 BOJ-10817(세 수)

	파이썬만큼은 아니지만 C++도 라이브러리를 활용하면 충분히 짧아진다.
	물론 실행시간은 C++이 압권.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int num[3];
	cin >> num[0] >> num[1] >> num[2];
	sort(num, num + 3);
	cout << num[1];
}
