/*
	2020-03-27 CPP Pointer 2

	포인터는 반드시 자료형을 가져야 한다, 자료형이 없으면 포인터는
	역참조 시 내용을 해석할 수 없다.
	또한, 포인터의 자료형과 할당되는 변수 자료형도 일치해야 한다.
	그렇지 않으면 역참조될 때 비트를 다른 자료형으로 잘못 해석한다.
*/
#include <iostream>
using namespace std;

int main()
{
	// 어떤 것을 가리키는 포인터 변수가 있다면, 역참조 연산자 (*) 를 통해
	// 포인터가 가리티는 주소의 값을 알 수 있다.
	int value = 5;
	cout << &value << '\n';	// value의 주소 출력
	cout << value << '\n';	// 값 출력

	int* ptr = &value;
	cout << ptr << '\n';	// ptr이 가리키는 주소 출력(value)
	cout << *ptr << '\n';	// ptr을 역참조한다(ptr이 가리키는 주소의 값 출력 == value)



	// 할당한 후에 포인터 값을 다른값으로 재할당할 수 있다.
	int value1 = 5;
	int value2 = 7;

	int* pt;

	pt = &value1;			// pt points to value1
	cout << *ptr << '\n';	// 5

	pt = &value2;			// pt points to value2
	cout << *ptr << '\n';	// 7

	// 일반적으로 다음은 참이다.
	// ptr == &value
	// *ptr = value
	
	// *ptr은 value와 같이 취급되므로 마치 변수처럼 값을 할당할 수 있다.
	value = 5;
	int* p = &value;

	*p = 7;
	cout << value << '\n';
}