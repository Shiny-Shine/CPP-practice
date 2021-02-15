// 2021-02-15 BOJ - 17413(단어 뒤집기 2)
#include <iostream>
#include <string>
#include <stack>
using namespace std;

void pop_print(stack<char>& word, bool space)
{
	while (!word.empty())
	{
		cout << word.top();
		word.pop();
	}

	if (space)	cout << ' ';
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);	cout.tie(nullptr);

	bool flag = false;
	stack<char> word;
	string str;
	getline(cin, str);

	for (char i : str)
	{
		if (i == '<')
		{
			flag = true;
			pop_print(word, false);
			cout << '<';
		}

		else if (i == '>')
		{
			flag = false;
			cout << i;
		}

		else if (flag == true)
			cout << i;

		else if (flag == false && i != ' ')
			word.push(i);

		else if (flag == false && i == ' ')
			pop_print(word, true);
	}

	pop_print(word, false);
}
