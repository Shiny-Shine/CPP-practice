//2019-11-12 STL min/max 2
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

int main(void) {
	string a = "test";
	string b = "string";
	string c = "game academy";

	cout << min({ a, b, c }) << '\n';
	cout << max({ a, b, c }) << '\n';

	//min, max, minmax(a, b, cmp)
	cout << min({ a, b, c }, [](string l, string r) {
		return l.size() < r.size();
	}) << '\n';//역순

	cout << max({ a, b, c }, [](string l, string r) {
		return l.size() < r.size();
	}) << '\n';//역순
}