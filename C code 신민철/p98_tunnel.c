//p98_tunnel
#include<stdio.h>
#define HIGH 170 //170을 HIGH로 미리 지정한다 (보통 대문자로) 
main(){
	int a, b, c;
	printf("터널들의 높이를 입력하세요");
	scanf("%d %d %d", &a, &b, &c);
	if (a<=HIGH)
		printf("충돌 %d", a);
	else if (b<=HIGH)
		printf("충돌 %d", b);
	else if (c<=HIGH)
		printf("충돌 %d", c);
	else
		printf("무사 통과");
	//다중 if문 
}
