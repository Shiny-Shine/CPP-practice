//2019/11/8
//function variable
using namespace std;
#include <iostream>
#include <functional>
#include <vector>

int main(void) {
	vector<function<int(int, int)>> d;

	d.push_back([](int a, int b) {
		cout << "µ¡¼À\n";
		return a + b;
	});		//µ¡¼À
	
	d.push_back([](int a, int b) {
		cout << "»¬¼À\n";
		return a - b;
	});

	d.push_back([](int a, int b) {
		cout << "°ö¼À\n";
		return a * b;
	});

	d.push_back([](int a, int b) {
		cout << "³ª´°¼À\n";
		return a / b;
	});

	d.push_back([](int a, int b) {
		cout << "³ª¸ÓÁö ¿¬»ê\n";
		return a % b;
	});

	int a, b;
	cin >> a >> b;
	for (auto &f : d) {
		cout << f(a, b) << '\n';
	}

	cout << d[1](100, 20);
}