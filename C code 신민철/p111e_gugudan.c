//구구단 출력 p111e_gugudan
#include<stdio.h>
main()
{
	int a, b;
	
	for(a=2; a<=9; a++){
	printf("\n==%d 단==\n", a); 
	for(b=1; b<=9; b++) printf("%d X %d = %d\n", a, b, a*b);
}
	putchar('\n');
}
