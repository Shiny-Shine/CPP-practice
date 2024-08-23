//재귀 함수()
//계승(factorial) : 5!(! = factorial) = 1*2*3*4*5
 
#include<stdio.h>

int fact(int k){
	if(k==1)	return 1;
	else return fact(k-1) * k;
}

int main(void){
	int n;
	
	printf("정수를 입력하면 계승을 계산합니다. => ");
	scanf("%d", &n);
	printf("%d 의 계승은 %d 입니다.", n, fact(n));	
}
