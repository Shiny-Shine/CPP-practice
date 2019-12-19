/*
	2019-12-18 BOJ-3052(나머지)

	C++, Python으로 각각 구현했다. C++이 아직은 훨씬 쉽다.
*/
#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<int, int> m;
	int cnt = 0;

	for (int i = 0; i < 10; i++)
	{
		int a;
		cin >> a;
		m[a % 42]++;
	}

	cout << m.size();
}
