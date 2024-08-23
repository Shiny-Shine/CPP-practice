//선택 정렬 (selection sort)- p138_3selection
#include<stdio.h>
#define NO 8
int main(void) {
	int i, j, temp, d[]={71, 12, 32, 4, 18, 10, 33, 24};
	
	printf("정렬 전 : ");
	for(i=0; i<NO; i++)	printf("%2d	", d[i]);
	putchar('\n');
	
	for(i=0; i<NO; i++){
		
		for(j=0; j<i+1; j++){
			if(d[i] > d[j]){
				temp = d[i];
				d[i] = d[j];
				d[j] = temp;
			}
		}
	}
	
	printf("정렬 후 : ");
	for(i=0; i<NO; i++)	printf("%2d	", d[i]);
	putchar('\n');
	
	return 0;
} 
