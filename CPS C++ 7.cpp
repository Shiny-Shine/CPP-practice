// 2020-01-20 7(영어단어 복구)
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s, str;
	getline(cin, s);

	for (auto i : s)
	{
		if (i >= 97)	str.push_back(i);
		if (i >= 65 && i < 97)	str.push_back(i + 32);
	}
	cout << str;
}