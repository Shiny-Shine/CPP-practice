#include<stdio.h>
int main(){
	int i, score[20], sum=0, win=0, def=0;
	float avg=0.0;
	
	srand(time(NULL));
	for(i=0; i<20; i++){
		score[i] = 1+rand() %100;
	}
	
	printf("=== 응시자 점수 ===\n");
	for(i=0; i<20; i++){
		printf("%2d => %2d\n", i+1, score[i]);
		sum=sum+score[i]; 
		if(score[i]>=60)	win++;
		else	def++;
		if((i+1)%5==0)	printf("------------------------------\n");
	}
	avg=sum/20.0;
	printf("응시자 총 점 : %d점\n", sum);
	printf("응시자 평 균 : %.2f점\n", avg);
	printf("------------------------------\n");
	printf("합격자 : %2d명, 불합격자 : %2d명\n", win, def);
	
	return 0;
}
