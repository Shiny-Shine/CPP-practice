//2019/11/8
//function variable
using namespace std;
#include <iostream>
#include <functional>
#include <vector>

int main(void) {
	vector<function<int(int, int)>> d;

	d.push_back([](int a, int b) {
		cout << "����\n";
		return a + b;
	});		//����
	
	d.push_back([](int a, int b) {
		cout << "����\n";
		return a - b;
	});

	d.push_back([](int a, int b) {
		cout << "����\n";
		return a * b;
	});

	d.push_back([](int a, int b) {
		cout << "������\n";
		return a / b;
	});

	d.push_back([](int a, int b) {
		cout << "������ ����\n";
		return a % b;
	});

	int a, b;
	cin >> a >> b;
	for (auto &f : d) {
		cout << f(a, b) << '\n';
	}

	cout << d[1](100, 20);
}