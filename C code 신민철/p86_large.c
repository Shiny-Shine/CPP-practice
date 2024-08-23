//3항 연산자(p86_large) 
#include <stdio.h>
main() {
	int su1, su2, big;
	
	printf("두 수를 입력하면 더 큰 수를 찾습니다");
	scanf("%d %d", &su1, &su2);
	big=(su1>su2)?su1:su2;
	printf("큰 수는 %d 입니다.\n"); 
}
