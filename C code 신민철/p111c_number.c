//ÁßÃ¸µÈ (nested)for¹® p111c_number
#include<stdio.h>
main()
{
	int i, k, s;
	
	for(k=1; k<=7; k++){
		for(s=7; s>=k; s--) printf(" ");	
		for(i=1; i<=k; i++) putchar('*');

	putchar('\n');
	}
}
