// 2020-01-20 16(Anagram)
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	map<char, int> m, m2;
	string a, b;

	cin >> a >> b;

	for (auto i : a)
		m[i]++;

	for (auto i : b)
		m2[i]++;

	if (m == m2)	cout << "YES\n";
	else cout << "NO\n";
}