//2019-11-11 STL unique2
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	vector<int> a = { 1, 1, 2, 2, 2 ,3, 1, 1 ,1 ,2, 2 ,2 ,2 };
	for (int x : a) cout << x << ' ';
	cout << '\n';

	auto last = unique(a.begin(), a.end());
	a.erase(last, a.end());	//last ���� �� ���� ����
	for (int x : a) cout << x << ' ';
	cout << '\n' << '\n';

	a = { 1, 1, 2, 2, 2 ,3, 1, 1 ,1 ,2, 2 ,2 ,2 };
	for (int x : a) cout << x << ' ';
	cout << '\n';

	//���� �� uniq, erase�� ����
	sort(a.begin(), a.end());
	for (int x : a) cout << x << ' ';
	cout << '\n';

	last = unique(a.begin(), a.end());
	for (int x : a) cout << x << ' ';
	cout << '\n';

	a.erase(last, a.end());
	for (int x : a) cout << x << ' ';
	cout << '\n';

}