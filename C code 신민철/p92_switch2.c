//문제3 (p92_switch2.c)
#include <stdio.h>
main() {
	int score;
	printf("평가 점수");
	scanf("%d", &score);
	printf("성취 결과 =>");
	switch(score/10) {
		case 10:
		case 9:printf("A \n"); break;
		case 8:printf("B \n"); break;
		case 7:printf("C \n"); break;
		case 6:printf("D \n"); break;
		default : printf("E \n");
		
	} 
} 
