//����ü �迭�� Ȱ�� (p173_struct3.c)
//�й�, �̸�, ����, ���ڵ� �����

#include<stdio.h>
#define NO 5

int main(void){
	struct student{
		short id;
		char name[9];
		int score;
	};
	
	struct student class[NO];
	struct student *spt;
	int no, i;
	
	srand(time(NULL));
	printf(" *** ������ �Է� ***\n");
	spt = class;
	for(i=0; i<NO; i++){
		(spt+i)->id = 1100+i+1;
		printf("%d�� �̸� => ", i+1);
		scanf("%s", (spt+i)->name);
	
		(spt+i)->score = 40+rand()%61;
	}
	printf("\n *** ������ ��� ***\n");
	for(i=0; i<NO; i++)	printf("%4d %-9s %3d\n", (spt+i)->id, (spt+i)->name, (spt+i)->score);
	
	return 0;
} 
