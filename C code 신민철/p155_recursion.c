//��� �Լ�()
//���(factorial) : 5!(! = factorial) = 1*2*3*4*5
 
#include<stdio.h>

int fact(int k){
	if(k==1)	return 1;
	else return fact(k-1) * k;
}

int main(void){
	int n;
	
	printf("������ �Է��ϸ� ����� ����մϴ�. => ");
	scanf("%d", &n);
	printf("%d �� ����� %d �Դϴ�.", n, fact(n));	
}
