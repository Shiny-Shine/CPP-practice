//2019-11-12 STL binary_search
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

int main(void) {
	vector<int> a = { 1, 5, 6 ,7, 10, 20 };

	for (int i = 1; i <= 10; i++) {
		cout << i << " : ";
		cout << binary_search(a.begin(), a.end(), i);
		cout << '\n';
	}
	//binary_search(begin, end, value, cmp);
	//����Ž��, cmp�Լ����ڰ� ������ �⺻ ������.
}