
//상수와 변수(p47_cata.c) 
//변수 선언과 동시에 값 선언=초기화 
// 
#include <stdio.h>
main()
{
	int a=30;
	float b=3.14;
	char c='A';
	char d[6]={'K','O','R','E','A', '\0'};
	
	printf("a=%d\n", a);
	printf("b=%f\n", b);
	printf("c=%c\n", c);
	printf("d=%s\n", d);
	
	printf("%d %f %c %s\n", a, b, c, d);
}
