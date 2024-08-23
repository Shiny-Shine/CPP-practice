//함수(p148_function) 
#include<stdio.h>
int f(int big, int c){
	if(big>c)	return big;
	else return c;
}
int main(void){
	int a, b, c, max, big;
	printf("3개의 정수를 입력하면 가장 큰 정수를 출력합니다. => ");
	scanf("%d %d %d", &a, &b, &c);
	big = (a>b)? a:b;
	printf("%d\n", f(big, c));
}
