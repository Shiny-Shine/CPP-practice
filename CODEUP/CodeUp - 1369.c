//CodeUp - 1369 빗금 친 사각형 출력하기

#include<stdio.h>

int main(void){
	int n, k, i, j, a;	//n 은 크기 k는 간격 
	
	scanf("%d %d", &n, &k);
	
	a = k-1;
	for(i=0; i<n; i++){
		
		if(i==0){
			for(j=0; j<n; j++)	printf("*");
		}
		
		if(i != 0 && i != n-1){
			
			for(j=0; j<n; j++){
				
				if(j==0){
					printf("*");
				}
				
				else if(j == n-1)	printf("*");
				
			}
		}
		
		if(i == n-1){
			for(j=0; j<n; j++)	printf("*");
		}
		printf("\n");p
	}
	
	return 0;
} 
