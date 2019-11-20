//2019-11-20 BOJ-10867(중복 뺴고 정렬하기)를 SET로 구현했다.
//중복제거, 정렬까지 다 해주기 때문에 걍 넣고 출력만 하면 된다.
#include <iostream>
#include <set>
using namespace std;

int main()
{
	set<int> s;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		s.insert(a);
	}

	for (int i : s)	cout << i << ' ';
}