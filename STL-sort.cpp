//2019-11-12 STL sort
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

bool cmp(int& L, int& R) {
	//sort 함수 3번째 cmp 함수 인자를 만들어 넣을수도 있다.
	return L > R;
}

int main(void) {
	//stable_sort를 쓰면 같은 값의 자리를 유지시키는 안정적 정렬을 함
	vector<int> a = { 5, 3 ,2 ,1 ,4 };
	for (int x : a)	cout << x << ' ';
	cout << '\n';

	sort(a.begin(), a.end());	//3번째 인자가 없으면 기본 오름차순
	for (int x : a)	cout << x << ' ';
	cout << '\n';

	a = { 5, 3 ,2 ,1 ,4 };
	for (int x : a)	cout << x << ' ';
	cout << '\n';

	sort(a.begin(), a.end(), greater<int>());	//다 같은 내림차순 방식
	sort(a.begin(), a.end(), cmp);
	sort(a.begin(), a.end(), [](int L, int R) {
		return L > R;
	});
	for (int x : a)	cout << x << ' ';
	cout << '\n';
}