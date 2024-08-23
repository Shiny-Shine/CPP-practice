//p138_1bubble1
#include<stdio.h>
#define NO 100

int main(void){
	int i, j, h, temp, cnt=0, no=7, flag=0;
	int n[NO];
	
	srand(time(NULL));
	for(i=0; i<NO; i++)	n[i] = rand()%1000;
	
	printf("정렬 전 : \n");
	for(i=0; i<NO; i++){
		printf("%d\t", n[i]);
	}
	
		putchar('\n');
	for(i=NO-1; i>1; i--){
				cnt++;
				temp = n[j];
				n[j] = n[j+1];
				n[j+1] = temp;
		flag = 0;
		for(j=0; j<i; j++){
			
			if(n[j] > n[j+1]){
				flag = 1;
			}
		}
		if(flag == 0)	break;
	}
	
	printf("\n\n정렬 후 : \n");
	for(i=0; i<NO; i++){
		printf("%d\t", n[i]);	
	}
	putchar('\n');
	
	printf("반복 횟수 : %d", cnt);
	
	return 0; 
}
