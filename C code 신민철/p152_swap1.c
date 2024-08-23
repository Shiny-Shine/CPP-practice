//교환(p152_swap1)
#include<stdio.h>

void swap(int *x, int *y){
	int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
}

int main(void){
	int a, b;
	
	printf("첫 번째 수 a 를 입력하세요 => ");
	scanf("%d", &a);
	printf("두 번째 수 b 를 입력하세요 => ");
	scanf("%d", &b);
	swap(&a, &b);
	printf("서로 교환된 값 => a=%d, b=%d\n", a, b);
}
