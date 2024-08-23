#include<stdio.h>
int main(void){
	int j, c;
	
	scanf("%d", &j);
	
	while(j != 1){
			
			if(j%2 == 1){
				j = (j*3)+1;
			}
			else	j = j/2;
			
			c++;
			printf("%d", j);
		}
		printf(" %d", c);
}
