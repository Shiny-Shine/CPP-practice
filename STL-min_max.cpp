//2019-11-12 STL min/max
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

int main(void) {
	cout << min(2, 3) << '\n';
	cout << max(2, 3) << '\n';

	int a = 10, b = 20, c = 30;
	cout << min(min(a, b), c)<< '\n';
	cout << max(max(a, b), c) << '\n';

	//initialized_list
	cout << min({ a, b, c }) << '\n';
	cout << max({ a, b, c }) << '\n';

	//pair ¹ÝÈ¯.
	cout << minmax({ a, b, c }).first << ',';
	cout << minmax({ a, b, c }).second << ',';
}