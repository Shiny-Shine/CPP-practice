//주사위 게임 -3(p111_dice3)
#include <stdio.h>
main() {
	int i, n;
	char yes;
	
	srand(time(NULL));
	do{
		system("cls");	//클리어 스크린
		system("color 2B");
		printf("몇명이 게임을 합니까?(2~9) => ");
		n=getche()-'0'; putchar('\n');
		if(n<=1 || n>9) printf("잘못 입력하셋습니다. \n\n");
		while(n<=1 || n>9);
		
		printf("\n===============================================");
			for(i=1; i<=n; i++) {
				printf("\n%d번 주사위를 던지세요! (스페이스바 입력) : ", i);
				getch();	//스페이스바를 기다림
				printf(" %d\n", 1+rand()%6); }
		printf("\n===============================================");
		
		printf("\n다시 하시려면 y 를 누르세요 => ");
		yes=getche(); putchar('\n');
		
	}while(yes=='y' ||yes=='Y');
} 
