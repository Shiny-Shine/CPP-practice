//2019-11-27 BOJ-11656(���̻� �迭)
//front�� ����ϱ����� deQ�� �����ߴ�, ���ڿ��� �������� �ٷＭ ���� ��������.
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

	//�Է� �޾Ƽ� char deQ�� �ְ� pop_front�ϸ� string deQ�� ����
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