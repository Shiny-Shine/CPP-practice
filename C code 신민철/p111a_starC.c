//��ø�� (nested)for�� p111a_starC
#include<stdio.h>
main()
{
	int i, k, s, a;
	printf("���� �Է��ϼ���");
	scanf("%d", &a);
	for(k=1; k<=a; k++)
	{
		for(s=a; s>=k; s--) putchar(' ');	
		for(i=1; i<=k; i++) putchar('*');

	putchar('\n');
	}
}
