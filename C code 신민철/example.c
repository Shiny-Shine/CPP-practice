//무조건 따라하기 - example.c
#include <stdio.h>
main()
{
	int i, sum=0;
	
	for(i=1; i<=100; i++)
		sum=sum-i;
	printf("1~100의 합 : %d", sum);
	
	system("pause");
 } 
