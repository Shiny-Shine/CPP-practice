//CodeUp - 1411 ���� ī�� 
#include<stdio.h>

int main(void){
	int i, j=0, card, sum=0;
	
	int c;
	//ī�尳���Է�
	scanf("%d", &card);
	for(i=1; i<=card; i++)	j = j+i;
	
	//ī�� ��ȣ �Է� 
	for(i=0; i<card-1; i++){
		scanf("%d", &c);
		sum = sum+c;
	}
	
	printf("%d", j - sum);
	return 0;
} 
