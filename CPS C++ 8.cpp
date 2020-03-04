// 2020-01-20 8(올바른 괄호)
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int c = 0;
	string s;
	cin >> s;
	
	for (auto i : s)
	{
		if (c < 0)
		{
			cout << "NO";
			return 0;
		}
		if (i == '(')	c++;
		else c--;
	}
	if (c != 0)	cout << "NO";
	else cout << "YES";
}