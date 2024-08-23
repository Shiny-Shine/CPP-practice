#include<stdio.h>
#define NO 8 
int main(void){
	
	system("color 09");
	
	int s[NO]={7, 9, 1, 5, 3, 8, 2, 4};
	int i, j, n=8, temp=0;
	
	printf("정렬 전 : ");
	for(i=0; i<NO; i++)	printf("%2d ", s[i]); 
	
	for(i=1; i<NO; i++){
		
		for(j=i; j>=1; j--){
			
			if(s[j-1] > s[j]){
				temp = s[j];
				s[j] = s[j-1];
				s[j-1] = temp;
			}
			else break;
		}
	}
	
	printf("\n정렬  후 : ");
	for(i=0; i<NO; i++)	printf("%2d ", s[i]); 
}
