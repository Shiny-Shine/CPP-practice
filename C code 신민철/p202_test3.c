//p202_test3.c
#include<stdio.h>

int main(void){
	struct soft{
		short id;
		int score;
		char name[10];
	};
	
	struct soft class;		//����ü ���� 
	struct soft *ptn;		//������ ������ ���� 
	int no, i;
	FILE *fp;				//���� ������ ���� 
	
	srand(time(NULL));
	printf("�л�����? => ");
	scanf("%d", &no); 
	
	ptn = malloc(sizeof(class)*no);			//�޸� Ȯ�� 
	printf("\n *** ������ �Է� ***\n");
	
	for(i=0; i<no; i++){
		(ptn+i)->id = 1100+i+1;				//�й� 
		printf("%2d�� �̸� => ", i+1);
		scanf("%s", (ptn+i)->name);			//�̸� �Է� 
		(ptn+i)->score=40+rand()%61;		//���� ���� 
	}
	
	fp=fopen("software.csv", "w");
	for(i=0; i<no; i++)
		fprintf(fp, "%4d, %-9s, %3d\n", (ptn+i)->id, (ptn+i)->name, (ptn+i)->score);
	fclose(fp);
	free(ptn);
	printf("\n *** ���� ������ ����Ǿ����ϴ� ***\n");
	
	return 0;
}
	
