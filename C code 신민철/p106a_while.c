//1~100까지의 합(p106a_while.c) 
#include<stdio.h>
main()
{
	int i=1,sum=0;
	
	while(i<=100){
		sum=sum+i;
		i++;
	}
	printf("sum = %d\ni=%d", sum, i);
}
