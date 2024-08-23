//정렬 평가-p138_test1 
#include<stdio.h>
#define NO 20

int main(void){
	int i=0, j, temp, trash;
	char ch[NO];
	
	srand(time(NULL));
	printf("정렬 전 : ");
	for(i=0; i<NO; i++){
		
	do{
		temp = 66+rand()%57;
		ch[i] = temp;
	}while(temp >= 91 && temp <= 96);
	
	
	printf("%c ", ch[i]);
	}
	
		for(i=NO-1; i>1; i--){
			for(j=0; j<i; j++){
			
				if(ch[j] > ch[j+1]){
					trash = ch[j];
					ch[j] = ch[j+1];
					ch[j+1] = trash;
				}
			}
		}
	printf("\n정렬 후 : ");
	for(i=0; i<NO; i++)	printf("%c ",ch[i]); 
} 
