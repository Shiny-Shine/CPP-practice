#include<stdio.h>
#define NO 5
#define FIELD 4

int main(void){
	int r, c, i, j, k, comma, money[NO][FIELD], rest;
	char *item[NO] = {"�� �� ��", "�ʹ�����", "�� ������", "���� �� ��", "�� �� ��!"};
	char temp[15], temp2[15];
	
	srand(time(NULL));
	for(r=0; r<NO; r++){
		money[r][0] = 100000*(5+rand()%16);
		money[r][1] = 3+rand()%5;
		money[r][2] = 1+rand()%2;
		money[r][3] = money[r][0] + ((money[r][0] * money[r][1]) / 100) - ((money[r][0] * money[r][2]) / 100);
	}
	
	printf("			���� ���� ��Ȳ\n\n");
	printf("====================================================================================\n");
	printf(" ��ȣ	 ����ó		    ����   	�ݸ�(%%)		����(%%)		���ɾ�\n");
	printf("------------------------------------------------------------------------------------\n");
	
	for(r=0; r<NO; r++){
		printf(" %2d	%8s	", r+1, item[r]);
		for(c=0; c<FIELD; c++){
			rest = money[r][c];
			i=comma=0;
			while(rest!=0){
				temp[i++] = rest%10 + '0';
				rest = rest/10;
				comma++;
				if(comma == 3 && rest!=0){
					temp[i++] = ',';
					comma=0;
				}
			}
			for(j=i-1, k=0; j>=0; j--, k++)	temp2[k] = temp[j];
			temp2[k] = '\0';
			printf(" %10s ", temp2);
		}
		printf("\n");
		printf("\n"); 
	}
	printf("====================================================================================\n");
}
