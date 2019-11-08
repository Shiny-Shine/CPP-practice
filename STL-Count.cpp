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
							//v.begin 부터 v.end 중에서 i의 개수를 찾는다.
	}

	//is_big 함수를 통해 3보다 큰 원소의 개수를 찾아준다.
	cout << "big : " << count_if(v.begin(), v.end(), is_big) << '\n';

	//짝수의 개수를 찾아 값을 even에 넣음
	int even = count_if(v.begin(), v.end(), [](int x) {
		return x % 2 == 0;
	});
	cout << "even : " << even << '\n';

	//마찬가지로 홀수.
	int odd = count_if(v.begin(), v.end(), [](int x) {
		return x % 2 == 1;
	});
	cout << "odd : " << odd << '\n';

}