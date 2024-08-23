//ÁßÃ¸µÈ (nested)for¹® p111a_times2
#include<stdio.h>
main()
{
	int i, k;
	
	for(k=1; k<=3; k++){
		printf("k = %d\n", k);
		printf("i = ");
	
		for(i=1; i<=5; i++) printf("%d, ",i);
	
	putchar('\n');
	}
}
