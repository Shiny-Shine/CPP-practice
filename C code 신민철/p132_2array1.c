//2과목을 배열에 저장(p132_2array1) 
#include<stdio.h>
#define NO 10	//NO를 10으로 설정
main(){
	int n, program[NO], architecture[NO];
	
	srand(time(NULL));
	for(n=0; n<NO; n++)
		program[n]=50+rand()%51;	//프로그래밍 점수
	for(n=0; n<NO; n++)
		architecture[n]=50+rand()%51;	//구조 점수
	
	printf("번호	프로	구조 \n");
	printf("---------------\n");
	for(n=0; n<NO; n++)
		printf("%2d	%3d	%3d\n", n+1, program[n], architecture[n]);
}
