using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

//오버로딩: 같은 클래스에서 함수를 여러개 정의하는것.시그너처signature가 달라진다.
//오버라이딩 : 상속받은 클래스에서 함수를 재정의 하는 것.시그너처signature가 동일하다.

int main() {
	vector<int>v = { 2, 2, 5, 4, 3, 2, 4, 3, 1, 2 ,6 };

	//find 로 v.begin 부터 end원소 중 i의 iterator를 반환한다, 못 찾으면 end()를 리턴한다
	for (int i = 1; i <= 7; i++) {
		auto it = find(v.begin(), v.end(), i);
		cout << i << "'s position : ";
		
		if (it == v.end()) {
			cout << "not found";
		}
		else {
			cout << (it - v.begin()) << '\n';
			//개념 점검 필요!
			//같은 배열내의 임의 접근 반복자끼리는 뺄셈도 가능하다.
			//두 반복자 사이에 있는 요소들이 같은 크기로 모여 있으므로 뺄셈 결과는 구간내의 요소 개수를 나타내는 정수값이다.
		}
	}
}