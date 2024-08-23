//주사위 게임 -1(p111_dice1)
#include <stdio.h>
main() {
	int i, n;
	
	srand(time(NULL));
	printf("몇 명이 게임을 합니까?");
	n = getche()-'0';
	putchar('\n');
	for(i=1; i<=n; i++) 
		printf(" %2d번 => %d\n", i, 1+rand()%6); 
} 
