//CodeUp - 3710 369∞‘¿” 3(Large Test Case)
#include<stdio.h>

int main(void){
	int i, j, a, b, t ,c=0;
	
	scanf("%d %d", &a, &b);
	
	for(i=a; i<=b; i++){
		t = i;
		while(t != 0){
			if(t%10 == 3 || t%10 == 6 || t%10 == 9)	c++;
			t = t/10;
		}
	}
	printf("%d", c);
	
	return 0;
} 
