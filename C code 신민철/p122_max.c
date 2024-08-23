//가장 큰 수(p122_max)
#include<stdio.h>
main() {
	int a, i, m1=0, m2=0;
	printf("10개의 자연수를 입력하세요\n");
	for(i=0; i<10; i++)
	{
		scanf("%d", &a);
		if(a%2==1)
		if(a>m1)
			m1=a;
		
		if(a%2==0)
		if(a>m2)
			m2=a;
	}
	if(m1>0)
	printf(" %d ", m1);
	if(m2>0)
	printf(" %d ", m2);
}
