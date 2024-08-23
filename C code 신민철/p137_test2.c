//문자열 평가(콤마찍기)-p137_test1
#include <stdio.h>
#define NO 5
#define FIELD 4

int main(void){
	int r, c, i, j, k, comma, money[NO][FIELD], rest;
	char *item[NO] = {"예금","적금","보험","주식","펀드"};
	char temp1[15], temp2[15];
	
	srand(time(NULL));
	for(r=0; r<NO; r++){
		money[r][0] = 100000*(5+rand()%16);	//원금  
		money[r][1] = 3+rand()%5;	//이자
		money[r][0] = 1+rand()%2;	//세율
		money[r][0] = money[r][0]+money[r][0] * money[r][1] / 100 - money[r][0] * money[r][2] / 100;
	}
	
	printf("			금융 투자 현황\n\n");
	printf("=================================================================\n");
	printf(" 번호 투자처	원금		금리(%%)	세울(%%)	수령액\n");
	printf("-----------------------------------------------------------------\n");
	
	for(r=0; r<NO; r++){
		printf(" %2d	%4s ", r+1, item[r]);
		
		for(c=0; c<FIELD; c++){
			rest = money[r][c];
			i=comma=0;
			while(rest != 0){
			temp1[i++]=rest%10+'0';
			rest = rest/10;
			comma++;
			if(comma==3 && rest!=0){
				temp1[i++]=',';
				comma=0;
			}
		}
		for(j=i-1, k=0; j>=0; j--, k++)	temp2[k] = temp1[j];
		temp2[k] = '\0';
		printf(" %10s ", temp2);
		}
		printf("\n");
		
	}
	printf("=================================================================\n");
}
