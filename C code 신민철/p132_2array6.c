//출력도 이중 반복문으로(p132_2array6)
#include<stdio.h>
#define NO 20	//NO를 10으로 설정
#define SUB 5	//과목수 
main(){
	int n, i, s[NO][SUB];	//[행-학생수][열-과목수]
	
	srand(time(NULL));
	for(n=0; n<NO; n++)
		for(i=0; i<SUB; i++)
			s[n][i]=50+rand()%51;
	
	printf("번호	국어	영어	수학	사회	과학\n");
	for(n=0; n<NO; n++){
		if(n%5==0)
		printf("-------------------------------------------\n");
		printf("%2d", n+1);
		for(i=0; i<SUB; i++)
			printf("	%3d", s[n][i]);
			putchar('\n');
		
		}
		
			 
} 
