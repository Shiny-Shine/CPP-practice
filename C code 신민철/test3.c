//������ ����~~
#include<stdio.h>
#define NO 12
#define FIELD 5

int main(void){
	int r, c, i;	//r = �� c = ��
	char *item[NO] = {"���", "��", "��", "��", "����", "����", "����", "����", "������", "�丶��", "�ٳ���", "���"};
	int fruit[NO][FIELD] = {0};
	int total[FIELD] = {0};
	
	srand(time(NULL));
	
	for(i=0; i<NO; i++){
		*(*(fruit+i)+0) = 4000+rand()%3000;
		*(*(fruit+i)+1) = *(*(fruit+i)+0)+rand()%2000;
		*(*(fruit+i)+2) = 51+rand()%50;
		*(*(fruit+i)+3) = *(*(fruit+i)+1)**(*(fruit+i)+2);
		*(*(fruit+i)+4) = (*(*(fruit+i)+1) - *(*(fruit+i)+0))* (*(*(fruit+i)+2));
	}
	
	for(i=0; i<NO; i++){
		*(total) += *(*(fruit+i)+0);
		*(total+1) += *(*(fruit+i)+1);
		*(total+2) += *(*(fruit+i)+2);
		*(total+3) += *(*(fruit+i)+3);
		*(total+4) += *(*(fruit+i)+4);
	}

	
	printf("       	���� û���� ��ȸ �Ǹ� ��Ȳ\n");
	printf("					Oct 23\n");
	printf("================================================\n");
	printf(" ǰ ��	����	�ҸŰ�	�Ǹŷ� �Ǹž�	����\n");
	printf("------------------------------------------------\n");
	for(i=0; i<NO; i++){
		printf(" %s	%d	%d 	%3d	%d	%8d\n", *(item+i), *(*(fruit+i)+0), *(*(fruit+i)+1), *(*(fruit+i)+2), *(*(fruit+i)+3), *(*(fruit+i)+4));
		if((i+1)%5==0)	printf("------------------------------------------------\n");
		else if(i+1==NO)	printf("------------------------------------------------\n");
	}
	printf(" �հ�	%d	%d 	 %3d	%d	%8d\n", *(total),	*(total+1),	*(total+2),	*(total+3), *(total+4));
	printf("================================================\n");
	return 0;
	
}
