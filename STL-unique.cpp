//2019-11-11 STL unique1
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//begin~end 사이 연속되는 값 1개 제외 제거, 컨테이너 크기 변동 X
//값을 덮어씌우거나 시프트 시킨다, 제거후end() 반환(unique된 이후 쓰레기값의 첫번째)
int main(void) {
	vector<int> a = { 1, 1, 2, 2, 2 ,3, 1, 1 ,1 ,2, 2 ,2 ,2 };
	for (int x : a) cout << x << ' ';
	cout << '\n';

	auto last = unique(a.begin(), a.end());
	for (int x : a) cout << x << ' ';

	//중복 제거후 벡터는 1,2,3,1,2이고 end반환되 last == 3.
	cout << '\n' <<  *last << '\n';

	//값을 덮어씌우거나 시프트만 했기 때문에 last 이후로는 이전 값이 그대로 남아있다.
	for (auto it = a.begin(); it != last; it++) {
		cout << *it << ' ';
	}cout << '\n';
}