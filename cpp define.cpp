/*
	2020-03-18 C++ Practice

	#으로 시작되는 코드는 전처리기임을 의미한다.
	(컴파일러가 컴파일하기 전에 처리하겟다는 의미)

	#define...
	코드 상의 특정 문자를 정의한다는 의미.

	define으로 정의한 문자는 변수가 아님, 단순 코드의 치환일 뿐.
*/
#include <iostream>
#define OUTPUT_NUMBER 100
//컴파일 전에 OUTPUT_NUMBER 문구를 만나면 100으로 고쳐 컴파일해라 라고 알려줌.
using namespace std;

int main()
{
	cout << "output number is " << OUTPUT_NUMBER << '\n';
	//실제 메모리에 올라가는 코드는 아래와 같다.
	//cout << "output number is " << 100 << '\n';
	//즉, OUTPUT_NUMBER 라는 코드는 100으로 치환되어 메모리에 올라가게 된다.
}