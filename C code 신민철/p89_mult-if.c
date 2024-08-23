//다중 if문(p89_mult-if.c) 
#include <stdio.h>
main() {
	int score;
	
	printf("평가 점수 =>");
	scanf("%d", &score);
	printf("성취 결과 =>");
	if(score>=90)
		printf("^A^");
	else if(score>=80)
		printf("^B^");
	else if(score>=70)
		printf("^C^");
	else if(score>=60)
		printf("^D^");
	else
		printf("^E^"); 
}
