//CodeUp - 1278 �ڸ��� ���
#include<stdio.h>

int main(void){
	int i, a, s=0;
	
	scanf("%d", &a);
	
	while(a != 0){
		s++;
		a = a/10;
	}
	
	printf("%d\n", s);
	
	return 0;
} 
