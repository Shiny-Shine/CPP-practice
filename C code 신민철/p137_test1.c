//���ڿ� ��(3�ڸ����� �޸����)-p137_test1
#include<stdio.h>
#include<string.h>
#define NO 5
#define FIELD 4	//����(50����~200���� 10���� ����),	�ݸ�(3~7%), ����(1~2%), ���ɾ�(����+����-����)

int main(void){
	int floor, r, c, i, j, k, comma, money[NO][FIELD], rest;
	char *item[NO] = {"����", "����", "����", "�ֽ�", "�ݵ�"};
	char temp1[15], temp2[15];
	
	srand(time(NULL));
	
	for(i=0; i<NO; i++){
		money[i][0] = 100000*(5+rand()%16);
		money[i][1] = 3+rand()%5;
		money[i][2] = 1+rand()%2;
		money[i][3] = money[i][0] + ((money[i][0] * money[i][1]) / 100) - ((money[i][0] * money[i][2]) / 100);
	}
	
	printf("			���� ���� ��Ȳ\n\n");
	printf("=====================================================================\n");
	printf(" ��ȣ ����ó	����		�ݸ�(%%)	����(%%)	���ɾ�\n");
	printf("---------------------------------------------------------------------\n");
	
	for(r=0; r<NO; r++){					//0~4
		printf(" %2d	%4s", r+1, item[r]);		//��ȣ ����ó 
		
		for(c=0; c<FIELD; c++){
			rest=money[r][c];		//��� ���� �� ���ڷ� �ٲ� 
			i=comma=0;				//i�� �޸� �ʱ�ȭ 
			
			while(rest!=0){
				temp1[i++] = rest%10+'0';		//������ �ڸ��� �� ���ڷ�
				rest = rest/10;					///10���� ���� �ڸ��� ���
				comma++;
				if(comma==3 && rest!=0){		//3���� �޸� ��� 
					temp1[i++] = ',';			
					comma=0;
				} 
			} 
			for(j=i-1, k=0; j>=0; j--, k++)	temp2[k] = temp1[j];		//for�� ���ǹ��� ������ 2���� �������� ���� 
			temp2[k] = '\0';											//������ NULLó��  
			printf(" %10s ", temp2);									//�׸��� ��� 
		}
		printf("\n");
	}
	printf("=====================================================================\n");
} 
