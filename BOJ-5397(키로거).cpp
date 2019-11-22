//2019-11-19 BOJ-5397(키로거)
//linked list로 구현했다, '-' 작업 중 포인터에 대한 이해가 부족해서
//삽질을 했다, 손가락으로 직접 계산하며 풀었다...
#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;	//Test Cases
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string in;
		list<char> pw;	//insert, erase를 쓰므로 list.
		list<char>::iterator it = pw.end();	//it의 왼쪽에 삽입하기 때문에 end.

		cin >> in;

		for (auto i : in)
		{
			auto cpyit = it;	//erase시 it가 사라지므로 복사해놓음.
			if (i != '<' && i != '>' && i != '-')
			{
				pw.insert(it, i);
			}
			if (i == '<')	if (it != pw.begin())	it--;
			if (i == '>')	if (it != pw.end())	it++;
			if (i == '-')
				if (it != pw.begin())
				{
					pw.erase(--cpyit);	//포인터에 대한 이해가 부족해 삽질을 했다...
				}
		}
		for (auto i : pw)	cout << i;
		cout << '\n';
	}
}
