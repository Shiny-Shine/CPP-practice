//2���� �迭�� �Լ� - 5���� ���� ��� ���ϱ�(p154_2array)
#include <stdio.h>
#define NO 20
#define SUB 5

void total(int (*s)[SUB], int *t){
	int n, sub;
	
	register int a;	//�������� ���� 
	
	for(n=0; n<NO; n++)
		for(sub=0; sub<SUB; sub++)
			*(t+n) += *(*(s+n)+sub);
}

void average(int *t, float *a){
	int n;
	
	for(n=0; n<NO; n++)
		*(t+n) = (float) *(t+n) / SUB;
}

int main(void){
	int n, s, score[NO][SUB], tot[NO]={0};
	float avg[NO];
	
	
	srand(time(NULL));
	for(n=0; n<NO; n++)
		for(s=0; s<SUB; s++)
			score[n][s] = 50+rand()%51;
			
	total(score, tot);
	average(tot, avg);
	
	printf("��ȣ	����	����	����	��ȸ	����	����	���\n");
	printf("-----------------------------------------------------------------------------------------\n");
	for(n=0; n<NO; n++){
		printf(" %2d	", n+1);
		for(s=0; s<SUB; s++)	printf(" %3d	", score[n][s]);
		printf("	%3d	%.1f\n", tot[n], avg[n]);
		if((n+1)%5==0)
			printf("-----------------------------------------------------------------------------------------\n");
	}
}
