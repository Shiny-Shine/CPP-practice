//�迭�� ������ ��(p136_test33)
#include<stdio.h>
#define NO 12
#define FIELD 6

int main(void){
	int r=FIELD, c=NO, i;
	char *item[NO] = {"���", "��", "��", "��", "����", "����", "����", "����", "������", "�丶��", "�ٳ���", "���"};
	int fruit[NO][FIELD], m_prise, max[FIELD]={0};
	
	srand(time(NULL));
	
	for(i=0; i<NO; i++){
		*(*(fruit+i)+0) = 3000+rand()%2000;
		*(*(fruit+i)+1) = 11+rand()%10;
		*(*(fruit+i)+2) = *(*(fruit+i)+0)-((*(*(fruit+i)+0)**(*(fruit+i)+1))/100.0);
		*(*(fruit+i)+3) = 501+rand()%500;
		*(*(fruit+i)+4) = *(*(fruit+i)+2)**(*(fruit+i)+3);
		*(*(fruit+i)+5) = (*(*(fruit+i)+0)-*(*(fruit+i)+2))**(*(fruit+i)+3);
	}
	

	
	printf("		���� û���� ��ȸ ������� ��Ȳ\n");
	printf("							Oct 25\n");
	printf("==================================================================\n");
	printf(" ǰ ��	�� ��	������	�ǸŰ�	�Ǹŷ�	�Ǹž�    �ս�\n");
	printf("------------------------------------------------------------------\n");
	
	for(i=0; i<NO; i++){
		printf(" %s	%d	%d	%d	%d	%d  %d\n", *(item+i), *(*(fruit+i)+0), *(*(fruit+i)+1), *(*(fruit+i)+2), *(*(fruit+i)+3), *(*(fruit+i)+4), *(*(fruit+i)+5));
		if((i+1)%5==0)	printf("------------------------------------------------------------------\n");
		else if(i+1==NO)	printf("------------------------------------------------------------------\n");
	}	
	printf("�ְ�ǰ�� ");
	
	for(c=0; c<FIELD; c++){
		m_prise=0;
		for(r=0; r<NO; r++){
			if(*(*(fruit+r)+c) > m_prise){
				m_prise = *(*(fruit+r)+c);
				*(max+c) = r;
			}
		}
		printf("%s	", *(item+*(max+c)));
	}
	
	
} 
