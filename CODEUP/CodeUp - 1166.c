//CodeUp - 1166 ���� �Ǻ� 
#include<stdio.h>

int main(void){
	int i, y;
	
	scanf("%d", &y);
	//�� �Է�
	
	if(y%4 == 0 && y%100 != 0)
		printf("yes\n");
	else if(y%400 == 0)
		printf("yes\n");
	else
		printf("no\n"); 
		
	return 0;
}
