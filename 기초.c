#include<stdio.h>
#define ROW 5		//2���� �迭�� ������
#define COLUMN 7	//2���� �迭�� ������

int main(void) {
	int arr[ROW][COLUMN] = { 0 }; //2�����迭 ������ 0���� �ʱ�ȭ
	int cnt = 1;

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COLUMN; j++) {
			arr[i][j] = cnt++; //cnt�Է��� 1����(����������)
			printf("%d ", arr[i][j]);
		}
		printf("\n");	//�ٳ����� ����
	}
	
	return 0;
}