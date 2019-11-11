//2019-11-11 STL rotate
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	//1
	vector<int> a = { 0, 1 ,2 ,3 ,4 ,5 };
	rotate(a.begin(), a.begin() + 2, a.end());

	for (int i : a)	cout << i << ' ';
	cout << '\n' << '\n';

	//2
	a = { 0, 1 ,2 ,3 ,4 ,5 };
	int n = a.size();

	for (int i = 0; i < n; i++) {
		rotate(a.begin(), a.begin() + 1, a.end());

		for (int i : a)	cout << i << ' ';
		cout << '\n';
	}cout << '\n';

	//3
	for (int i = 0; i < n; i++) {
		rotate(a.rbegin(), a.rbegin() + 1, a.rend());
		//역방향 이터레이터용 함수, rbegin == end - 1, rbegin + 1 == end - 2
		for (int i : a)	cout << i << ' ';
		cout << '\n';
	}
}