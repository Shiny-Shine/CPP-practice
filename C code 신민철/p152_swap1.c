//��ȯ(p152_swap1)
#include<stdio.h>

void swap(int *x, int *y){
	int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
}

int main(void){
	int a, b;
	
	printf("ù ��° �� a �� �Է��ϼ��� => ");
	scanf("%d", &a);
	printf("�� ��° �� b �� �Է��ϼ��� => ");
	scanf("%d", &b);
	swap(&a, &b);
	printf("���� ��ȯ�� �� => a=%d, b=%d\n", a, b);
}
