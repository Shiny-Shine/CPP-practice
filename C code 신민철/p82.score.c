//p82.score.c 
#include <stdio.h>
main() {
	int money;
	int book;
	int a;
	printf("당신의 용돈은 얼마입니까");
	scanf("%d", &money);
	printf("책값은 얼마 입니까??");
	scanf("%d", &book) ;
	
	if(money>book)
	{
		a=money-book;
		printf("%d 원 남았습니다", a);
	}
	else if(money<book) 
	{
		printf("돈이 모자랍니다");
	}
}
