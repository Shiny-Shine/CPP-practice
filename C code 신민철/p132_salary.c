//급여 관리(p132_salary)
#include<stdio.h>
#define NO 20
#define DAILY 80000
#define EXTRA 15000
#define TAX 0.12
main(){
	int n, i, p[NO][7];
	
	srand(time(NULL));
	for(n=0; n<NO; n++) {
		p[n][0]=15+rand()%11;
		p[n][1]=rand()%26;
	}
	
	for(n=0; n<NO; n++) {
		p[n][2]=p[n][0]*DAILY;	//근무일수에 따른 급여
		p[n][3]=p[n][0]*EXTRA;
		p[n][4]=p[n][2]+p[n][3];
		p[n][5]=p[n][4]*TAX;
		p[n][6]=p[n][4]-p[n][5];
	}
	
	printf("					9월 봉급 명세서\n");
	printf("------------------------------------\n");
	printf("사원	근무    초과   	임금   	초과   	급여    	세액   	최종\n");
	printf("번호	일수    근무   	총액   	수당   	합계    	공제   	수령액\n");
	printf("------------------------------------\n");
	for(n=0; n<NO; n++) {
		printf("%2d	%2d	%2d	", n+1, p[n][0], p[n][1]);
		for(i=2; i<7; i++)	printf(" %7d ", p[n][i]);
		putchar('\n');
		if((n+1)%5==0)	printf("--------------------------------\n");
	} 
} 
