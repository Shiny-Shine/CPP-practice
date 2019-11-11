//2019-11-11 STL Fill
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	vector<int> a = { 1, 4, 1, 2, 4, 2, 4, 2 ,3, 4, 4 };
	for (int i : a) {
		cout << x << ' ';
	}
	cout << '\n';

	fill(a.begin(), a.end(), 0);
	for (int i : a) {
		cout << x << ' ';
	}
	cout << '\n';
}