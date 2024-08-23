//ÁßÃ¸µÈ (nested)for¹® p111c_number2
#include<stdio.h>
main()
{
	int i, k;
	
	for(k=7; k>=1; k--){
	
		for(i=1; i<=k; i++) putchar('*');

	putchar('\n');
	}
}
