//�Լ�(p153_bubble1)
#include<stdio.h>
#define NO 10

void swap(int *x, int *y){		//��ȯ���� 2���⶧���� ���̵� �����͸� �̿��� ������ �Ѵ� 
	int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
} 

int main(void){
	int i, j, s[NO];
	
	srand(time(NULL));
	printf("�߻��� ���� => ");
	for(i=0; i<NO; i++){
		s[i] = 1+rand()%100;
		printf("%3d,", s[i]);
	} 
	
	for(i=0; i<NO-1; i++){
		for(j=i+1; j<NO; j++)	if(s[i] > s[j])	swap(&s[i], &s[j]);
	}
	printf("\b \n���ĵ� �Լ� => ");
	for(i=0; i<NO; i++)	printf("%3d,", s[i]);
	printf("\b ");
	
}
