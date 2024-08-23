//난수발생 정수 출력(p126c_rand)
#include<stdio.h>
main(){
	int i, score[20];
	
	srand(time(NULL));
	for(i=0; i<20; i++)
		score[i]=1+rand()%100;
	
	printf("\n=====점수 출력=====\n");
	for(i=0; i<20; i++)
		printf("%2d 번 점수 => %3d\n",i+1, score[i]);
} 
