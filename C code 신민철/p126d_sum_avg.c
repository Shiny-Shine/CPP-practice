//난수발생 정수 출력(p126d_sum_avg)
#include<stdio.h>
main(){
	int i, score[20], sum=0;
	float avg;
	
	srand(time(NULL));
	for(i=0; i<20; i++)
		score[i]=1+rand()%100;
	
	printf("\n=====점수 출력=====\n");
	for(i=0; i<20; i++)
		printf("%2d 번 점수 => %3d\n",i+1, score[i]);
		
	printf("\n=====통계 출력=====\n");
	for(i=0; i<20; i++)	sum=sum+score[i];	avg=sum/20.0;
	printf("총점 : %d, 평균 : %.2f", sum, avg);
} 
