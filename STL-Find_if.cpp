using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main() {
	vector<int>v = { 1, 2, 5, 4, 3, 2, 4, 3, 1, 2 ,6 };
	//function variable, bool�� ��ȯ�ϰ� int�Ű����� �� ���� �Լ��� �̷���� ����.
	vector<function<bool(int)>> op;
	op.push_back([](int x) {
		return (x % 2 == 0);
	});
	op.push_back([](int x) {
		return (x % 3 == 0);
	});
	op.push_back([](int x) {
		return (x % 5 == 0);
	});

	//findif�� iterator�� ��ȯ�ϹǷ� find �ڵ��� ���� ���� �ʿ�.
	//findif�� ���Ǻκ��� �Լ��������̴�.
	//op�� ��ȯ�ϹǷ� ���� �Լ� 3���� 1���� �����Ѵ�, 2,3,5 == 0�� �����ϴ� ù��° ���� �ε����� ���
	for (auto& f : op) {
		int res = find_if(v.begin(), v.end(), f) - v.begin();
		cout << res << '\n';
	}

}