//수행 평가 2차(2test1)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define NO 20
#define SUB 5
int main(void) {
	int i, j, star=0, cnt=0;
	int s[NO][SUB];
	int sum[NO] = {0};
	int sum2[SUB] = {0};
	int max[SUB] = {0};
	int maxno[SUB] = {0};
	float avg[NO];
	
	for(i=0; i<NO; i++){
		
		for(j=0; j<SUB; j++){
			s[i][j] = 40+rand()%61;
		}
		
	}
	
	for(i=0; i<NO; i++){
		sum[i] = sum[i] + s[i][0] + s[i][1] + s[i][2] + s[i][3] + s[i][4];
		avg[i] = sum[i] / 5.0;
		
	}
	
	for(j=0; j<SUB; j++){
		for(i=0; i<NO; i++){
			sum2[j] = sum2[j] + s[i][j];
		}
	}
	
	for(j=0; j<SUB; j++){
		for(i=0; i<NO; i++){
			if(max[j] < s[i][j]){
				max[j] = s[i][j];
				maxno[j] = i+1;
			}
		}
	}
	
	printf("----------------------------------------------------------------\n");
	printf(" 번호	 국어  영어  수학  사회  과학	총점 	 평균  성취수준\n");
	printf("----------------------------------------------------------------\n");
	
	for(i=0; i<NO; i++){
		printf(" %2d      %3d   %3d   %3d   %3d   %3d", i+1, s[i][0], s[i][1], s[i][2], s[i][3], s[i][4]);
		printf("	%3d	 %.1f	", sum[i], avg[i]);
		star = (int)avg[i]/10;
		
		for(j=star; j>0; j--)	putchar('*');
		putchar('\n');
		
		if((i+1)%5==0)	printf("----------------------------------------------------------------\n");
		
	}
	printf("과목총점 %3d  %3d  %3d  %3d  %3d\n", sum2[0], sum2[1], sum2[2], sum2[3], sum2[4]);
	printf("과목평균 %.1f  %.1f  %.1f  %.1f  %.1f\n", sum2[0]/20.0, sum2[1]/20.0, sum2[2]/20.0, sum2[3]/20.0, sum2[4]/20.0);
	printf("장 학 생 %d번  %d번  %d번  %d번  %d번\n", maxno[0], maxno[1], maxno[2], maxno[3], maxno[4]);
	return 0;
}
