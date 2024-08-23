//배열의 초기화(p127_initialize)
#include<stdio.h>
main() {
	int i, n[]={5, 8, 2, 4, 7};
	
	printf("=====초기화된 자료 출력=====\n\n");
	for(i=4; i>=0; i--)
		printf("%3d", n[i]);
} 
