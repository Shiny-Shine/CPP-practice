#include<stdio.h>
main()
{
	int i, k, s, a;
	putchar('\n');
	
	printf("다이아몬드 중간의 크기를 입력하세요 : ");
	scanf("%d", &a);
	a=a*2-1;
	
		for(k=1; k<=a; k+=2)
	{
		for(s=a; s>=k; s-=2) putchar(' ');
		for(i=1; i<=k; i++) putchar('*');
	putchar('\n');
	}
	
	for(k=a-2; k>=1; k-=2)
	{
		for(s=a; s>=k; s-=2) putchar(' ');
	
		for(i=1; i<=k; i++) putchar('*');
	putchar('\n');
	}
	putchar('\n');
}
