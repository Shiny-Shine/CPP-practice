#include<stdio.h>
int main(){
	int i, score[20], sum=0, win=0, def=0;
	float avg=0.0;
	
	srand(time(NULL));
	for(i=0; i<20; i++){
		score[i] = 1+rand() %100;
	}
	
	printf("=== ������ ���� ===\n");
	for(i=0; i<20; i++){
		printf("%2d => %2d\n", i+1, score[i]);
		sum=sum+score[i]; 
		if(score[i]>=60)	win++;
		else	def++;
		if((i+1)%5==0)	printf("------------------------------\n");
	}
	avg=sum/20.0;
	printf("������ �� �� : %d��\n", sum);
	printf("������ �� �� : %.2f��\n", avg);
	printf("------------------------------\n");
	printf("�հ��� : %2d��, ���հ��� : %2d��\n", win, def);
	
	return 0;
}
