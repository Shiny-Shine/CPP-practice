/*�Լ� ��(p154_test1)
20��, 5���� 50~100�� ���� �߻�
���� ���� total, ��� average, �ְ������� �Լ� �̿�
����:�Լ� �������� �����͸� �̿��Ͽ� �迭�� ����*/
#include<stdio.h>
#define NO 20
#define SUB 5

int main(void){
	int i, j, s[NO][SUB];
	int tot[SUB] = {0};
	float avg[SUB];
	int max[SUB] = {0}, min[SUB] = {100};
	char *line="-------------------------------------------------\n";
	void total(), average(), min_max();
	srand(time(NULL));
	for(i=0; i<NO; i++){
		for(j=0; j<SUB; j++){
			s[i][j] = 50+rand()%51;
		}
	}
	total(s, tot);
	average(tot, avg);
	min_max(s, min, max);
	printf("%s", line);
	printf("��ȣ	����	����	����	��ȸ	����\n");
	printf("%s", line);
	for(i=0; i<NO; i++){
		printf(" %2d	", i+1);
		for(j=0; j<SUB; j++)	printf(" %3d ", s[i][j]);
		printf("\n");
		if((i+1)%5 == 0)	printf("%s", line);
	}
	printf("����");
	for(i=0; i<SUB; i++)	printf("	%4d", tot[i]) ;
	printf("\n���");
	for(i=0; i<SUB; i++)	printf("	%.1f", avg[i]); 
	printf("\n�ְ�");
	for(i=0; i<SUB; i++)	printf("	%3d", max[i]); 
	printf("\n����");
	for(i=0; i<SUB; i++)	printf("	%3d", min[i]); 
	printf("\n%s", line);
	
}
void total(int (*s)[SUB], int *tot){
	int i, j;
	for(i=0; i<SUB; i++){
		*(tot+i)=0;
		for(j=0; j<NO; j++){
			*(tot+i) += *(*(s+j)+i);
		}
	}
}

void average(int *tot, float *avg){
	int no;
	for(no=0; no<SUB; no++){
		*(avg+no) = *(tot+no) / NO;
	}
}

void min_max(int (*s)[SUB], int *min, int *max){
	int i, j;
	for(i=0; i<SUB; i++){
		*(max+i) = *(min+i) = *(*(s+0)+i);
		for(j=1; j<NO; j++){
			if( *(*(s+j)+i) > *(max+i))	*(max+i) = *(*(s+j)+i);
			if( *(*(s+j)+i) < *(min+i))	*(min+i) = *(*(s+j)+i);
		}
	}
}
