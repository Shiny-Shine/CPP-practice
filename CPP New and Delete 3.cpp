/*
	2020-03-24 C++ Practice

	New & Delete 3

	malloc는 new와 다르게 메모리만 할당해주고 생성자 호출은 하지 않는다.

	New 가 하는 일
	1. 메모리 할당
	2. 생성자 호출
	3. 타입변환

	Delete 가 하는 일
	1. 소멸자 호출
	2. 메모리 해제

	배열의 2차원 동적 할당
*/

#include <iostream>
#include <iomanip>	//setw
#define ROW 7
#define COL 10
using namespace std;


int main(void)
{
	int** pb = (int**) new int* [ROW];	// 주소값을 저장할 공간을 우선 만든다.
	pb[0] = (int*) new int[ROW * COL];	// 데이터를 담을 공간 전체를 만든다.
	for (int i = 1; i < ROW; i++)	pb[i] = pb[i - 1] + COL;		// 모든 주소값을 구성해 둔다.
	for (int i = 0; i < ROW * COL; i++)	pb[i / COL][i % COL] = i;	// 값을 할당한다.

	//print
	for (int r = 0; r < ROW; r++)
	{
		for (int c = 0; c < COL; c++)
			cout << setw(2) << pb[r][c] << ' ';
		cout << '\n';
	}

	delete[] pb[0];
	delete[] pb;
}