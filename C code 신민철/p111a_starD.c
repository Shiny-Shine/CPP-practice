//��ø�� (nested)for�� p111a_starD
#include<stdio.h>
main()
{
	int i, k, s, a;
	putchar('\n');
	
	printf("���̾Ƹ�� �߰��� ũ�⸦ �Է��ϼ��� : ");
	scanf("%d", &a) ;
	
		for(k=1; k<=a; k+=2)
	{
		for(s=a; s>=k; s-=2) putchar(' ');
		for(i=1; i<=k; i++) putchar('*');
	putchar('\n');
	}
	
	for(k=a-2; k>=1; k-=2)
	{
		for(s=a; s>=k; s-=2) putchar(' ');
		if(a%2==0)
			for(i=1; i<=k-1; i++) putchar('*');
			
		else	
			for(i=1; i<=k; i++) putchar('*');
	putchar('\n');
	}
	putchar('\n');
}
