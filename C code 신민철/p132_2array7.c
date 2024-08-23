//5과목의 총점 평균 구하기(p132_2array7)
#include<stdio.h>
#define NO 10	//NO를 10으로 설정
#define SUB 5	//과목수 
main(){
	int n, i, s[NO][SUB], sum[NO];	//[행-학생수][열-과목수]
	float avg[NO];
	
	srand(time(NULL));
	for(n=0; n<NO; n++)
		for(i=0; i<SUB; i++)
			s[n][i]=50+rand()%51;
			
	for(n=0; n<NO; n++) {
		sum[n]=0;
		for(i=0; i<SUB; i++)
			sum[n]=sum[n]+s[n][i];	//총점
		avg[n]=(float)sum[n]/SUB;	//평균  
	}
	
		
	printf("번호	국어	영어	수학	사회	과학	총점	평균\n");
	printf("----------------------------------------------------------------------\n");
	for(n=0; n<NO; n++){
		printf("%2d", n+1);
		for(i=0; i<SUB; i++)
			printf("	%3d", s[n][i]);
		printf("	%3d	%.2f\n", sum[n], avg[n]);
		}
		
			 
} 
