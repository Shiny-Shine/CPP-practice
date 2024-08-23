//이중 반복문으로 저장(p132_2array5)
#include<stdio.h>
#define NO 10	//NO를 10으로 설정
#define SUB 5	//과목수 
main(){
	int n, i, s[NO][SUB];	//[행-학생수][열-과목수]
	
	srand(time(NULL));
	for(n=0; n<NO; n++)
		for(i=0; i<SUB; i++)
			s[n][i]=50+rand()%51;
	
		
	printf("번호	국어	영어	수학	사회	과학\n");
	printf("----------------------------------------------------------------------\n");
	for(n=0; n<NO; n++)
		printf("%2d	%3d	%3d	%3d	%3d	%3d\n", n+1, s[n][0], s[n][1], s[n][2], s[n][3], s[n][4]);
} 
