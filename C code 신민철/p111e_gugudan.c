//������ ��� p111e_gugudan
#include<stdio.h>
main()
{
	int a, b;
	
	for(a=2; a<=9; a++){
	printf("\n==%d ��==\n", a); 
	for(b=1; b<=9; b++) printf("%d X %d = %d\n", a, b, a*b);
}
	putchar('\n');
}
