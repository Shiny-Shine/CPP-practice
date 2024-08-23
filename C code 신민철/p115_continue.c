//반복 부분의 일부 생략(p115_continue)
#include <stdio.h>
int main() {
	int i, sum=0;
	
	for(i=1; i<=10; i++) {
		if(i%2 == 0) continue;	//i를 2로 나눈 나머지가0(짝수)이면 생략
		printf("%d ", i);
		sum=sum+1;
	}
	printf("\n1~10까지의 홀수의 합 : %d \n", sum);
} 
