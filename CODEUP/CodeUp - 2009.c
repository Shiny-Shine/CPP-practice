//CodeUp - 2009 �Ƹ޸�ī��
#include<stdio.h>

int main(void){
	int i, j, k = 0, n = 0 ,count = 0, coffee = 0;
	
	scanf("%d %d", &k, &n);
	//�������� �ʿ䰳�� �Է�
	
	for(i=1; i<=k; i++){
		count++;
		if(count%n == 0){
			count++;
			coffee++;
		}
	}
	
	printf("%d\n", coffee);
	
	return 0;
} 
