/*
	2020-03-24 C++ Practice

	New & Delete 2

	배열의 동적 할당
	메모리 동적 할당에서 변수와 배열의 할당으로 구분하는 것 자체가 큰 의미가 없다.
	그냥 메모리(Heap Zone)에 필요한 만큼의 공간을 행위일 뿐이다.
*/

#include <iostream>
using namespace std;


int main(void)
{
	int* pa = (int*)malloc(sizeof(int) * 5);
	for (int i = 0; i < 5; i++) *(pa + i) = 10 * i;

	int* pb = new int(20);
	for (int i = 0; i < 5; i++) *(pb + i) = 10 * i;

	for (int i = 0; i < 5; i++)	cout << pa[i] + pb[i] << '\n';
	printf("%p, %p\n", pa, pb);

	free(pa);		// Dangling Pointer 가 되지 않도록
	delete(pb);		// Null Pointer로 초기화 시킨다.

	pa = 0;
	pb = nullptr;
	printf("%p, %p\n", pa, pb);
}