//2019-11-19 BOJ-5397(Ű�ΰ�)
//ó���� main�� ������ ������ �Լ��� ���� �������.
#include <iostream>
#include <list>
#include <string>

using namespace std;

void edit(list<char>& pw, list<char>::iterator& it, string in)
{
	for (auto i : in)
	{
		auto cpyit = it;	//erase�� it�� ������Ƿ� �����س���.
		if (i != '<' && i != '>' && i != '-')
		{
			pw.insert(it, i);
		}
		if (i == '<')	if (it != pw.begin())	it--;
		if (i == '>')	if (it != pw.end())	it++;
		if (i == '-')
			if (it != pw.begin())
			{
				pw.erase(--cpyit);
			}
	}
	for (auto i : pw)	cout << i;
	cout << '\n';
}

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;	//Test Cases
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string in;
		list<char> pw;	//insert, erase�� ���Ƿ� list.
		list<char>::iterator it = pw.end();	//it�� ���ʿ� �����ϱ� ������ end.

		cin >> in;

		edit(pw, it, in);
	}
}