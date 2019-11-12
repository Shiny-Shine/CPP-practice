using namespace std;
#include <iostream>

int main(void) {
	int a, b, c;
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b >> c;
		cout << b + c << '\n';
	}
}