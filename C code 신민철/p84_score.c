//p84_score.c
#include <stdio.h>
main() {
	int score;
	printf("당신의 점수는?");
	scanf("%d", &score);
	
	if(score>=60)
		printf("합격 하셧습니다\n축하합니");
	else
			printf("불합격 하셧습니다\n다음 기회에 다시 도전하십시오"); 
}
