//자판 입력(p70_scan)
#include <stdio.h>
main() {
	int jsu;
	float ssu;
	
	printf("정수를 입력하세요. => ");
	scanf("%d", &jsu);
	printf("실수를 입력하세요. => ");
	scanf("%f", &ssu);
	printf("정수는 %d이고, 실수는 %f이다.\n", jsu, ssu); 
} 
