//문자열 평가(3자리마다 콤마찍기)-p137_test1
#include<stdio.h>
#include<string.h>
#define NO 5
#define FIELD 4	//원금(50만원~200만원 10만원 단위),	금리(3~7%), 세율(1~2%), 수령액(원금+이율-세율)

int main(void){
	int floor, r, c, i, j, k, comma, money[NO][FIELD], rest;
	char *item[NO] = {"예금", "적금", "보험", "주식", "펀드"};
	char temp1[15], temp2[15];
	
	srand(time(NULL));
	
	for(i=0; i<NO; i++){
		money[i][0] = 100000*(5+rand()%16);
		money[i][1] = 3+rand()%5;
		money[i][2] = 1+rand()%2;
		money[i][3] = money[i][0] + ((money[i][0] * money[i][1]) / 100) - ((money[i][0] * money[i][2]) / 100);
	}
	
	printf("			금융 투자 현황\n\n");
	printf("=====================================================================\n");
	printf(" 번호 투자처	원금		금리(%%)	세율(%%)	수령액\n");
	printf("---------------------------------------------------------------------\n");
	
	for(r=0; r<NO; r++){					//0~4
		printf(" %2d	%4s", r+1, item[r]);		//번호 투자처 
		
		for(c=0; c<FIELD; c++){
			rest=money[r][c];		//모든 돈을 다 문자로 바꿈 
			i=comma=0;				//i와 콤마 초기화 
			
			while(rest!=0){
				temp1[i++] = rest%10+'0';		//마지막 자리를 뗴어서 문자로
				rest = rest/10;					///10으로 다음 자리수 계산
				comma++;
				if(comma==3 && rest!=0){		//3마다 콤마 출력 
					temp1[i++] = ',';			
					comma=0;
				} 
			} 
			for(j=i-1, k=0; j>=0; j--, k++)	temp2[k] = temp1[j];		//for문 조건문은 변수를 2개를 돌릴수도 잇음 
			temp2[k] = '\0';											//끝날떄 NULL처리  
			printf(" %10s ", temp2);									//그리고 출력 
		}
		printf("\n");
	}
	printf("=====================================================================\n");
} 
