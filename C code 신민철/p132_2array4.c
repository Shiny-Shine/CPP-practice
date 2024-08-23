//5과목을 2차원 배열에 저장(p132_2array4)
#include<stdio.h>
#define NO 10	//NO를 10으로 설정
#define SUB 5	//과목수 
main(){
	int n, s[NO][SUB];	//[행-학생수][열-과목수]
	
	srand(time(NULL));
	for(n=0; n<NO; n++){
		s[n][0]=50+rand()%51;
		s[n][1]=50+rand()%51;
		s[n][2]=50+rand()%51;
		s[n][3]=50+rand()%51;
		s[n][4]=50+rand()%51;
	}
	
		
	printf("번호	국어	영어	수학	사회	과학\n");
	printf("----------------------------------------------------------------------\n");
	for(n=0; n<NO; n++)
		printf("%2d	%3d	%3d	%3d	%3d	%3d\n", n+1, s[n][0], s[n][1], s[n][2], s[n][3], s[n][4]);
} 
