//중첩된 (nested)for문 p111a_starC
#include<stdio.h>
main()
{
	int i, k, s, a;
	printf("수를 입력하세요");
	scanf("%d", &a);
	for(k=1; k<=a; k++)
	{
		for(s=a; s>=k; s--) putchar(' ');	
		for(i=1; i<=k; i++) putchar('*');

	putchar('\n');
	}
}
