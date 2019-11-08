using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

bool is_big(int x) {
	return (x > 2);
}

int main() {
	vector<int> v = { 1,4,1,2,4,2,4,2,4,3,4,4 };

	for (int i = 1; i <= 5; i++) {
		cout << i << " : " << count(v.begin(), v.end(), i) << '\n';
							//v.begin ���� v.end �߿��� i�� ������ ã�´�.
	}

	//is_big �Լ��� ���� 3���� ū ������ ������ ã���ش�.
	cout << "big : " << count_if(v.begin(), v.end(), is_big) << '\n';

	//¦���� ������ ã�� ���� even�� ����
	int even = count_if(v.begin(), v.end(), [](int x) {
		return x % 2 == 0;
	});
	cout << "even : " << even << '\n';

	//���������� Ȧ��.
	int odd = count_if(v.begin(), v.end(), [](int x) {
		return x % 2 == 1;
	});
	cout << "odd : " << odd << '\n';

}