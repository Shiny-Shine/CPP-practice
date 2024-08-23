//CodeUp - 1173 30ºÐÀü
#include<stdio.h>

int main(void){
	int hour, min;
	
	scanf("%d %d", &hour, &min);
	
	if(min >= 30)	printf("%d %d\n", hour, min-30);
	else if(hour == 0)	printf("%d %d\n", 23, min+30);
	else printf("%d %d\n", hour-1, min+30);
	
	return 0;
} 
