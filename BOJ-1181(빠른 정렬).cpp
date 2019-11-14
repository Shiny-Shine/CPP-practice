using namespace std;
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

bool cmp(const pair<string, int>& a, const pair<string, int>& b) {
	return a.second < b.second;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	string s;
	vector<pair<string, int>> v;

	cin >> n;
	for (int i = 0; i < n; i++) {
		int size;
		cin >> s;
		size = s.length();
		v.push_back(make_pair(s, size));
	}

	//stable_sort ���� �Ϲ� sort�� ����� Ʋ�Ǵٰ� ���´�... ������ �� �𸣰ڴ�.
	stable_sort(v.begin(), v.end());
	stable_sort(v.begin(), v.end(), cmp);
	auto last = unique(v.begin(), v.end());
	v.erase(last, v.end());

	for (auto i : v) {
		cout << i.first << '\n';
	}
}