/*
	2020-03-24 C++ Practice

	New & Delete 3

	malloc�� new�� �ٸ��� �޸𸮸� �Ҵ����ְ� ������ ȣ���� ���� �ʴ´�.

	New �� �ϴ� ��
	1. �޸� �Ҵ�
	2. ������ ȣ��
	3. Ÿ�Ժ�ȯ

	Delete �� �ϴ� ��
	1. �Ҹ��� ȣ��
	2. �޸� ����

	�迭�� 2���� ���� �Ҵ�
*/

#include <iostream>
#include <iomanip>	//setw
#define ROW 7
#define COL 10
using namespace std;


int main(void)
{
	int** pb = (int**) new int* [ROW];	// �ּҰ��� ������ ������ �켱 �����.
	pb[0] = (int*) new int[ROW * COL];	// �����͸� ���� ���� ��ü�� �����.
	for (int i = 1; i < ROW; i++)	pb[i] = pb[i - 1] + COL;		// ��� �ּҰ��� ������ �д�.
	for (int i = 0; i < ROW * COL; i++)	pb[i / COL][i % COL] = i;	// ���� �Ҵ��Ѵ�.

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