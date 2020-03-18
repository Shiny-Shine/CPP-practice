/*
	2020-03-18 C++ Practice

	#define 을 이용해 "매크로 함수" 를 만들 수 있다.
	함수처럼 보이나 단순한 "코드의 치환"임을 명심하도록 한다.

	코드 치환 형태로 작동하기 때문에, 의도치 않은 결과가 나올 수도 있다.
	그래서 매크로 함수를 만들 때는 안정성 확보를 위해 괄호를 많이 사용한다.

	괄호의 과도 사용으로 가독성이 떨어지는 단점이 있지만, "코드 치환"이기에
	변수 타입에대한 고려는 안해도 되는 장점이 있다.
*/
#include <iostream>
#define SQUARE1(X) X*X
#define SQUARE2(X) ((X) * (X))
using namespace std;

int main()
{
	cout << "[Case 1]\n";
	cout << "square1 result = " << SQUARE1(10) << '\n';	//10*10 = 100
	cout << "square2 result = " << SQUARE2(10) << '\n';	//((10) * (10)) = 100

	int x = 1;
	cout << "[Case 2]\n";
	//	1 + 5 * 1 + 5 = 11
	cout << "square1 result = " << SQUARE1(x + 5) << '\n';
	//	((1 + 5) * (1 + 5)) = 36
	cout << "square1 result = " << SQUARE1(x + 5) << '\n';
}