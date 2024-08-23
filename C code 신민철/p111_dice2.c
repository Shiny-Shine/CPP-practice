//주사위 게임 -1(p111_dice2)
#include <stdio.h>
main() {
	int i, n;
	
	srand(time(NULL));
	printf("몇 명이 게임을 합니까?(2~9) => ");
	n = getche()-'0';
	printf("\n===================================================");
	for(i=1; i<=n; i++) {
		printf("\n%d번 주사위를 던지세요! (스페이스바 입력) : ", i);
		getch();	//스페이스바를 기다림
		printf(" %d\n", 1+rand()%6); 
	}
} 
