//반복문의 탈출(p114_break)
#include <stdio.h>
int main() {
	int i, sum=0;
	
	for(i=1; i<=20; i++) {
		printf("%d ", i);
		if(i==10) break;
		sum=sum+i;
	
	}
	printf("\n1~10까지의 합 : %d \n", sum);
} 
