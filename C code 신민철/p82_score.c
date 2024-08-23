//IF문 p82_score.c
#include <stdio.h>

main() {
	int score;
	
	printf("점수를 입력하세요\n");
	scanf("%d", &score);
	
	if(score>=60)
		printf("합격하였습니다");

}
