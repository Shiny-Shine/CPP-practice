//2019-11-20 BOJ-10867(�ߺ� ���� �����ϱ�)�� SET�� �����ߴ�.
//�ߺ�����, ���ı��� �� ���ֱ� ������ �� �ְ� ��¸� �ϸ� �ȴ�.
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