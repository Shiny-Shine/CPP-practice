//2019-11-11 STL reverse
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	vector<int> a = { 1, 4, 1, 2, 4, 2, 4, 2 ,3, 4, 4 };
	for (int i : a) {
		cout << i << ' ';
	}
	cout << '\n';

	reverse(a.begin(), a.end());
	for (int i : a) {
		cout << i << ' ';
	}
	cout << '\n';
}