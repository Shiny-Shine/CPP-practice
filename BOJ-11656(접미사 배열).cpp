//2019-11-27 BOJ-11656(접미사 배열)
//front를 사용하기위해 deQ로 구현했다, 문자열을 오랜만에 다뤄서 조금 서툴럿다.
#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	deque<string> arr;
	deque<char> dq;
	string s;
	cin >> s;

	//입력 받아서 char deQ에 넣고 pop_front하며 string deQ에 삽입
	for (auto i : s)	dq.push_back(i);

	while (dq.size() != 0)
	{
		string temp;
		for (auto i : dq)
		{
			temp.push_back(i);
		}
		arr.push_back(temp);
		dq.pop_front();
	}

	sort(arr.begin(), arr.end());
	for (auto i : arr)	cout << i << '\n';
}