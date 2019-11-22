//2019-11-12 BOJ-15552(빠른 A+B)
//C++에서의 입출력 함수인 cin/cout는 stdio와 동기화를 하기때문에 시간이 걸린다.
//이 동기화를 풀어줌으로써 scanf/printf만큼은 아니지만 비슷한 속도로 끌어올릴 수 있다.
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
