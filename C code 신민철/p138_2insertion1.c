//����(insertion)--p138_2insertion1
#include<stdio.h>
#define NO 5

int main(void){
	int s[NO+1]={1, 3, 5, 7, 9, 0};
	int i, j, n=2;
	
	printf("2�� ���� �� : ");
	for(i=0; i<NO; i++)	printf("%2d ", s[i]); 
	
	for(i=NO-1; i>=0; i--){
		
		if(s[i] > n){
			s[i+1] = s[i];
		}
		else{
			s[i+1] = n;
			break;
		}
	}
	
	printf("\n2�� ���� �� : ");
	for(i=0; i<=NO; i++)	printf("%2d ", s[i]); 
}
