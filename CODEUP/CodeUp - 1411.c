//CodeUp - 1411 빠진 카드 
#include<stdio.h>

int main(void){
	int i, j=0, card, sum=0;
	
	int c;
	//카드개수입력
	scanf("%d", &card);
	for(i=1; i<=card; i++)	j = j+i;
	
	//카드 번호 입력 
	for(i=0; i<card-1; i++){
		scanf("%d", &c);
		sum = sum+c;
	}
	
	printf("%d", j - sum);
	return 0;
} 
