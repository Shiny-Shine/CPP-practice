//p82.score.c 
#include <stdio.h>
main() {
	int money;
	int book;
	int a;
	printf("����� �뵷�� ���Դϱ�");
	scanf("%d", &money);
	printf("å���� �� �Դϱ�??");
	scanf("%d", &book) ;
	
	if(money>book)
	{
		a=money-book;
		printf("%d �� ���ҽ��ϴ�", a);
	}
	else if(money<book) 
	{
		printf("���� ���ڶ��ϴ�");
	}
}
