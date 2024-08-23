//합격, 불합격자 인원 출력(p131b_nopass) 
#include<stdio.h>
main(){
	int i, score[20], pass=0, nonps = 0;

	srand(time(NULL));
	for(i=0; i<20; i++)
		score[i]=1+rand()%100;
		
	printf("===== 점수 출력 =====\n");
	for(i=0; i<20; i++)
		printf("%2d번 점수 => %3d\n",i+1, score[i]);
	
	printf("\n===== 응시생 통계 =====\n");
	for(i=0; i<20; i++)
		if(score[i]>=70)	pass++;
		else	nonps++;
	
	printf("합격자는 %d명이고, 불합격자는 %d명입니다.\n", pass, nonps);	
}

