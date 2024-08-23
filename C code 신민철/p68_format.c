//형식 지정 문자(p68_format)
#include <stdio.h>
main() {
	float d=31.456;
	
	printf("d(31.456)=%f \n", d);
	printf("d(31.456)=%7.2f \n", d);
	printf("d(31.456)=%-7.2f \n", d);
	printf("d(31.456)=%.2f", d);
} 
