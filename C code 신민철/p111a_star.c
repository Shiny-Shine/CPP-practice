//��ø�� (nested)for�� p111a_star
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
	printf("����Ʈf�� ���� Ƚ�� = %d", cnt);			
}
