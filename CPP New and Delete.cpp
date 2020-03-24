/*
	2020-03-24 C++ Practice

	New & Delete

	1. memory allocation
	memory + al - locate :	메모리에 자리잡게 만들다.
	memory allocation :		메모리 할당

	C language : malloc,	C++ : malloc & new

	2. memoery release
	전달받은 메모리 상의 '주소값' 으로 찾아가서 할당된 메모리를 헤제시킨다.

	이때, 주소값이 가리키는 실제 메모리 상의 데이터를 없애버리거나 초기화 시키지는 않는다.
	헤당 영역은 이제 더 이상 사용되지 않는 공간임을 선언, 일종의 가용 메모리가 되어
	시스템이 필요할 경우 해당 공간을 할당하거나 사용 가능 (디스크 빠른 포멧과 비슷)

	3. Dalgling Pointer
	'댕글링 포인터' 는 포인터가 가리키고 있는 지점은 'free'나 'delete'를 통해 이미 메모리가
	해제된 지점이기 때문에 언제든지 시스템에 의해 다른 형태로 사용될 수 있는 지점이 된다.
	그래서 '댕글댕글', 불안하게 연결된 형태의 포인터가 되는 것이다.
	실제로 공간이 사라진 것이 아니고, 포인터를 해제시켰다고 당장 없어진 것도 아니기에
	일정부분 공간을 사용할 순 있으나 예측불허의 불안한 프로세싱이 언제나 일어날 수 있다.
*/

#include <iostream>
using namespace std;


int main(void)
{
	int* pa = (int*)malloc(4);
	*pa = 10;
	cout << *pa << '\n';
	free(pa);
	*pa = 100;				//dangling pointer
	cout << *pa << '\n';

	int* pb = new int;
	*pb = 20;
	cout << *pb << '\n';
	delete(pb);
	*pb = 200;				//dangling pointer
	cout << *pb << '\n';
}