using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main() {
	vector<int>v = { 1, 2, 5, 4, 3, 2, 4, 3, 1, 2 ,6 };
	//function variable, bool을 반환하고 int매개변수 를 갖는 함수로 이루어진 백터.
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

	//findif도 iterator를 반환하므로 find 코드의 개념 점검 필요.
	//findif의 조건부분은 함수포인터이다.
	//op를 순환하므로 위의 함수 3개를 1번씩 실행한다, 2,3,5 == 0을 만족하는 첫번째 값의 인덱스를 출력
	for (auto& f : op) {
		int res = find_if(v.begin(), v.end(), f) - v.begin();
		cout << res << '\n';
	}

}