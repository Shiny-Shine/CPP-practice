//�����߻� ���� ���(p126c_rand)
#include<stdio.h>
main(){
	int i, score[20];
	
	srand(time(NULL));
	for(i=0; i<20; i++)
		score[i]=1+rand()%100;
	
	printf("\n=====���� ���=====\n");
	for(i=0; i<20; i++)
		printf("%2d �� ���� => %3d\n",i+1, score[i]);
} 
