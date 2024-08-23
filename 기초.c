#include<stdio.h>
#define ROW 5		//2차원 배열의 가로줄
#define COLUMN 7	//2차원 배열의 세로줄

int main(void) {
	int arr[ROW][COLUMN] = { 0 }; //2차원배열 생성후 0으로 초기화
	int cnt = 1;

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COLUMN; j++) {
			arr[i][j] = cnt++; //cnt입력후 1증가(후위연산자)
			printf("%d ", arr[i][j]);
		}
		printf("\n");	//줄끝나면 개행
	}
	
	return 0;
}