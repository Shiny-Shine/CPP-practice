/*
	2020-03-23 C++ Practice

	Reference(참조자, &) 2

	Call By Reference
	참조자를 함수의 매개변수로도 활용이 가능하다.
	C언어에서 포인터로 Call By Reference 처리를 했다면 (SWAP 함수 등)
	C++ 에서는 참조자를 통해서 CBR 처리한다

	참조자 변수로 구성된 함수 호출 시에는 반드시 변수이름이 들어가야 한다.
*/

#include <iostream>
using namespace std;

void SwapByRef(int& ref1, int& ref2)
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int main(void)
{
	int val1 = 10, val2 = 20;

	cout << "---Before Swapping---\n";
	cout << "val1 : " << val1 << ", val2 : " << val2 << '\n';

	SwapByRef(val1, val2);	//값이 들어오면 안됨.

	cout << "---After Swapping---\n";
	cout << "val1 : " << val1 << ", val2 : " << val2 << '\n';
}
