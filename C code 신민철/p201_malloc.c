//�޸� �Ҵ�(p201_malloc.c)
#include<stdio.h>

int main(void){
	int no, i, *ptn;
	
	srand(time(NULL));
	printf("�ʿ��� ������ ������? => ");
	scanf("%d", &no);
	ptn = malloc(sizeof(int)*no);
		//heap������ ���� ������ Ȯ���ϰ� ���� �ּ� ����
	
	for(i=0; i<no; i++)	*(ptn+i) = 40+rand()%61;
	for(i=0; i<no; i++) printf("%3d => %3d\n", i+1, *(ptn+i));
	
	free(ptn);
} 
