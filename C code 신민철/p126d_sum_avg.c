//�����߻� ���� ���(p126d_sum_avg)
#include<stdio.h>
main(){
	int i, score[20], sum=0;
	float avg;
	
	srand(time(NULL));
	for(i=0; i<20; i++)
		score[i]=1+rand()%100;
	
	printf("\n=====���� ���=====\n");
	for(i=0; i<20; i++)
		printf("%2d �� ���� => %3d\n",i+1, score[i]);
		
	printf("\n=====��� ���=====\n");
	for(i=0; i<20; i++)	sum=sum+score[i];	avg=sum/20.0;
	printf("���� : %d, ��� : %.2f", sum, avg);
} 
