//무조건 이동(p115_goto) 
#include <stdio.h>
int main() {
	int i, j;
	
	for(i=1; i<=3; j++)
		for(j=1; j<=5; j++) {
			printf("%d * %d \n",i, j, i*j);
			goto exit;
		}
	exit: printf("The End");
} 
