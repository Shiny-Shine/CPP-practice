//2019-11-25 BOJ-10814(나이순 정렬)
//tuple 을 이용해 정렬하는 문제이다. 난이도는 어렵지 않지만
//vector를 초기화 해놓고 push_back 하는 바람에 인덱스가 꼬여 삽질했다.
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