//중첩된 (nested)for문 p111a_star
#include<stdio.h>
main()
{
	int i, k, cnt=0;
	
	for(k=1; k<=3; k++)
	{
		for(i=1; i<=5; i++)
	{
			cnt++;
			putchar('*');
	}
		putchar('\n');	
	}
	printf("프린트f가 사용된 횟수 = %d", cnt);			
}
