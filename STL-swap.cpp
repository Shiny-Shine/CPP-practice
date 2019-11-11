//2019-11-11 STL swap
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int a = 10, b = 20;
	cout << a << ", " << b << '\n';

	swap(a, b);
	cout << a << ", " << b << '\n';

	swap(a, b);
	cout << a << ", " << b << '\n';

	vector<int> a2 = { 1, 2 };
	vector<int> b2 = { 3, 4 };
	cout << a2[0] << ", " << b2[0] << '\n';
	swap(a2, b2);	//벡터 내용이 통으로 바뀐다.
	cout << a2[1] << ", " << b2[1] << '\n';
}