/*
	2020-03-18 C++ Practice

	inline함수는 "매크로 함수" 처럼 코드를 치환해서 작동하기 때문에
	함수 호출 오버헤드를 없애 일반 함수보다 더 빠르게 작동한다.

	하지만 함수를 인라인화 하는것은 코드를 부풀릴 수 있어
	내부 루프가 없는 짧은 함수에 적합하다.
	또한, 컴파일러는 inline 요청을 자유롭게 무시할 수 있다.

	인라인 함수를 알고 있어야 하지만 최신 컴파일러는 함수를 적절하게 인라인화 하므로 inline 키워드를 사용할 필요가 없다.
*/
#include <iostream>
using namespace std;

int square1(int x)
{
	return x * x;
}

inline int square2(int x)
{
	return x * x;
}

int main()
{
	//일반적인 함수의 실행 형태
	cout << "case 1 result: " << square1(10) << '\n';

	//inline 함수.
	cout << "case 1 result: " << square2(10) << '\n';
	//inline 함수는 아래화 같은 형태로 컴파일된다, 매크로와 비슷하다.
	//cout << "case 1 result: " << 10 * 10 << '\n';
}