//2019-11-25 BOJ-10814(���̼� ����)
//tuple �� �̿��� �����ϴ� �����̴�. ���̵��� ����� ������
//vector�� �ʱ�ȭ �س��� push_back �ϴ� �ٶ��� �ε����� ���� �����ߴ�.
#include <iostream>
#include <vector>
#include <tuple>
#include <string>
#include <algorithm>
using namespace std;

bool sortby123(const tuple<int, string, int>& a, const tuple<int, string, int>& b)
{
	if (get<0>(a) == get<0>(b))
		return get<2>(a) < get<2>(b);
	else
		return get<0>(a) < get<0>(b);
}

int main()
{
	int n;
	cin >> n;
	vector<tuple<int, string, int>> member;
	
	for (int i = 0; i < n; i++)
	{
		int age;
		string name;
		cin >> age >> name;
		member.push_back(make_tuple(age, name, i + 1));
	}
	sort(member.begin(), member.end(), sortby123);
	for (auto i : member)	cout << get<0>(i) <<  ' ' << get<1>(i) << '\n';

}